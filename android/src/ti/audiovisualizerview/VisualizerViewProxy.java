/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package ti.audiovisualizerview;

import org.appcelerator.kroll.KrollDict;
import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.kroll.common.Log;

import org.appcelerator.titanium.util.TiConvert;
import org.appcelerator.titanium.proxy.TiViewProxy;
import org.appcelerator.titanium.view.TiUIView;
import org.appcelerator.titanium.TiApplication;

import com.pheelicks.visualizer.renderer.BarGraphRenderer;
import com.pheelicks.visualizer.renderer.CircleBarRenderer;
import com.pheelicks.visualizer.renderer.CircleRenderer;
import com.pheelicks.visualizer.renderer.LineRenderer;
import com.pheelicks.visualizer.VisualizerView;

import android.app.Activity;
import android.view.View;
import android.view.LayoutInflater;
import android.content.res.*;

import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff.Mode;
import android.graphics.PorterDuffXfermode;

@Kroll.proxy(creatableInModule = AudiovisualizerviewModule.class)
public class VisualizerViewProxy extends TiViewProxy {

	// instance of pheelicks view
	VisualizerView visualizerView;
	TiApplication appContext;
	Activity activity;

	private static final String LCAT = "Pheelicks";
	final public int DEFAULT_AUDIOSESSION = 0;

	

	// Constructor
	public VisualizerViewProxy() {
		super();
		appContext = TiApplication.getInstance();
		activity = appContext.getCurrentActivity();
		Log.d(LCAT, "inside VisualizerViewProxy");
	}

	@Override
	public TiUIView createView(Activity activity) {
		TiUIView view = new VisualizerImageView(this);
		return view;
	}

	// Handle creation options
	@Override
	public void handleCreationDict(KrollDict options) {
		super.handleCreationDict(options);
	}

	private class VisualizerImageView extends TiUIView {
	
		public VisualizerImageView(final TiViewProxy proxy) {
			super(proxy);
			// creating view from xml res
			String packageName = proxy.getActivity().getPackageName();
			Resources res = proxy.getActivity().getResources();
			View visualizerContainer;
			LayoutInflater inflater = LayoutInflater.from(getActivity());
			visualizerContainer = inflater.inflate(
					res.getIdentifier("main", "layout", packageName), null);
			visualizerView = (VisualizerView) visualizerContainer
					.findViewById(res.getIdentifier("visualizerView", "id",
							packageName));
			visualizerView.link(DEFAULT_AUDIOSESSION); // binding to mixer out
			
		}

		@Override
		public void processProperties(KrollDict props) {
			super.processProperties(props);
		}
	}
	@Kroll.method
	public void addLineRenderer() {
		Paint linePaint = new Paint();
		linePaint.setStrokeWidth(1f);
		linePaint.setAntiAlias(true);
		linePaint.setColor(Color.argb(88, 0, 128, 255));

		Paint lineFlashPaint = new Paint();
		lineFlashPaint.setStrokeWidth(5f);
		lineFlashPaint.setAntiAlias(true);
		lineFlashPaint.setColor(Color.argb(188, 255, 255, 255));
		LineRenderer lineRenderer = new LineRenderer(linePaint, lineFlashPaint,
				true);
		visualizerView.addRenderer(lineRenderer);

	}
	@Kroll.method
	public void addCircleRenderer() {
		Paint paint = new Paint();
		paint.setStrokeWidth(3f);
		paint.setAntiAlias(true);
		paint.setColor(Color.argb(255, 222, 92, 143));
		CircleRenderer circleRenderer = new CircleRenderer(paint, true);
		visualizerView.addRenderer(circleRenderer);
	}
	@Kroll.method
	public void addCircleBarRenderer() {
		Paint paint = new Paint();
		paint.setStrokeWidth(8f);
		paint.setAntiAlias(true);
		paint.setXfermode(new PorterDuffXfermode(Mode.LIGHTEN));
		paint.setColor(Color.argb(255, 222, 92, 143));
		CircleBarRenderer circleBarRenderer = new CircleBarRenderer(paint,
				32, true);
		visualizerView.addRenderer(circleBarRenderer);
	}
	@Kroll.method
	public void addBarGraphRenderers() {
		Paint paint = new Paint();
		paint.setStrokeWidth(50f);
		paint.setAntiAlias(true);
		paint.setColor(Color.argb(200, 56, 138, 252));
		BarGraphRenderer barGraphRendererBottom = new BarGraphRenderer(16,
				paint, false);
		visualizerView.addRenderer(barGraphRendererBottom);

		Paint paint2 = new Paint();
		paint2.setStrokeWidth(12f);
		paint2.setAntiAlias(true);
		paint2.setColor(Color.argb(200, 181, 111, 233));
		BarGraphRenderer barGraphRendererTop = new BarGraphRenderer(4,
				paint2, true);
		visualizerView.addRenderer(barGraphRendererTop);
	}
}