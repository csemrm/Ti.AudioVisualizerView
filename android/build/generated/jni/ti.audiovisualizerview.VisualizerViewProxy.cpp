/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.audiovisualizerview.VisualizerViewProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.titanium.proxy.TiViewProxy.h"

#define TAG "VisualizerViewProxy"

using namespace v8;

		namespace ti {
		namespace audiovisualizerview {
			namespace audiovisualizerview {


Persistent<FunctionTemplate> VisualizerViewProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass VisualizerViewProxy::javaClass = NULL;

VisualizerViewProxy::VisualizerViewProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void VisualizerViewProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("VisualizerView");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void VisualizerViewProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::TiViewProxy::dispose();
}

Handle<FunctionTemplate> VisualizerViewProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ti/audiovisualizerview/VisualizerViewProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("VisualizerView");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::TiViewProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<VisualizerViewProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "addLineRenderer", VisualizerViewProxy::addLineRenderer);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "addCircleBarRenderer", VisualizerViewProxy::addCircleBarRenderer);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "callThisCallbackDirectly", VisualizerViewProxy::callThisCallbackDirectly);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "addCircleRenderer", VisualizerViewProxy::addCircleRenderer);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "addBarGraphRenderers", VisualizerViewProxy::addBarGraphRenderers);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------
	instanceTemplate->SetAccessor(
		String::NewSymbol("top"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getTop", titanium::Proxy::getProperty, String::NewSymbol("top"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setTop", titanium::Proxy::onPropertyChanged, String::NewSymbol("top"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("width"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getWidth", titanium::Proxy::getProperty, String::NewSymbol("width"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setWidth", titanium::Proxy::onPropertyChanged, String::NewSymbol("width"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("height"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getHeight", titanium::Proxy::getProperty, String::NewSymbol("height"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setHeight", titanium::Proxy::onPropertyChanged, String::NewSymbol("height"));
	instanceTemplate->SetAccessor(
		String::NewSymbol("onload"),
		titanium::Proxy::getProperty,
		titanium::Proxy::onPropertyChanged,
		Handle<Value>(), DEFAULT);
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "getOnload", titanium::Proxy::getProperty, String::NewSymbol("onload"));
	DEFINE_PROTOTYPE_METHOD_DATA(proxyTemplate, "setOnload", titanium::Proxy::onPropertyChanged, String::NewSymbol("onload"));

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> VisualizerViewProxy::addLineRenderer(const Arguments& args)
{
	LOGD(TAG, "addLineRenderer()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(VisualizerViewProxy::javaClass, "addLineRenderer", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addLineRenderer' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> VisualizerViewProxy::addCircleBarRenderer(const Arguments& args)
{
	LOGD(TAG, "addCircleBarRenderer()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(VisualizerViewProxy::javaClass, "addCircleBarRenderer", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addCircleBarRenderer' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> VisualizerViewProxy::callThisCallbackDirectly(const Arguments& args)
{
	LOGD(TAG, "callThisCallbackDirectly()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(VisualizerViewProxy::javaClass, "callThisCallbackDirectly", "(Ljava/util/HashMap;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'callThisCallbackDirectly' with signature '(Ljava/util/HashMap;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "callThisCallbackDirectly: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> VisualizerViewProxy::addCircleRenderer(const Arguments& args)
{
	LOGD(TAG, "addCircleRenderer()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(VisualizerViewProxy::javaClass, "addCircleRenderer", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addCircleRenderer' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> VisualizerViewProxy::addBarGraphRenderers(const Arguments& args)
{
	LOGD(TAG, "addBarGraphRenderers()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(VisualizerViewProxy::javaClass, "addBarGraphRenderers", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addBarGraphRenderers' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}

// Dynamic property accessors -------------------------------------------------


			} // namespace audiovisualizerview
		} // audiovisualizerview
		} // ti
