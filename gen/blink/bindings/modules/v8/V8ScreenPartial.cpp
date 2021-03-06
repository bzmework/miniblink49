// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ScreenPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Screen.h"
#include "bindings/modules/v8/V8ScreenOrientation.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "modules/screen_orientation/ScreenScreenOrientation.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace ScreenPartialV8Internal {

static void orientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Screen* impl = V8Screen::toImpl(holder);
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RawPtr<ScreenOrientation> cppValue(ScreenScreenOrientation::orientation(scriptState, *impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "orientation"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void orientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    ScreenPartialV8Internal::orientationAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ScreenPartialV8Internal

void V8ScreenPartial::installV8ScreenTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    V8Screen::installV8ScreenTemplate(functionTemplate, isolate);

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::screenOrientationEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Screen", v8::Local<v8::FunctionTemplate>(), V8Screen::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Screen", v8::Local<v8::FunctionTemplate>(), V8Screen::internalFieldCount,
            0, 0,
            0, 0,
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::screenOrientationEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"orientation", ScreenPartialV8Internal::orientationAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
}

void V8ScreenPartial::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8Screen::preparePrototypeObject(isolate, prototypeObject, interfaceTemplate);
}

void V8ScreenPartial::initialize()
{
    // Should be invoked from initModules.
    V8Screen::updateWrapperTypeInfo(
        &V8ScreenPartial::installV8ScreenTemplate,
        &V8ScreenPartial::preparePrototypeObject);
}

} // namespace blink
