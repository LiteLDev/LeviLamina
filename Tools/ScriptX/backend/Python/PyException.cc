/*
 * Tencent is pleased to support the open source community by making ScriptX available.
 * Copyright (C) 2021 THL A29 Limited, a Tencent company.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <ScriptX/ScriptX.h>
#include "PyHelper.h"
#include "PyEngine.h"

namespace script {

namespace py_backend {

std::string ExceptionFields::getMessage() const noexcept {
  if(hasMessage_)
    return message_;
  
  Local<Value> obj = exceptionObj_.get();
  PyObject* exceptionObj = py_interop::peekPy(obj);

  PyObject *argsData = py_backend::getAttr(exceptionObj, "args");     // borrowed
  if(!PyTuple_Check(argsData) || PyTuple_Size(argsData) == 0)
    return "[No Exception Message]";
  PyObject *msg = PyTuple_GetItem(argsData, 0);     // borrowed

  message_ = py_backend::fromStr(msg);
  hasMessage_ = true;
  return message_;
}

std::string ExceptionFields::getStacktrace() const noexcept {
  if(hasStacktrace_)
    return stacktrace_;

  Local<Value> obj = exceptionObj_.get();
  PyObject* exceptionObj = py_interop::peekPy(obj);

  PyTracebackObject* pStacktrace = (PyTracebackObject*)PyException_GetTraceback(exceptionObj);
  if(pStacktrace == nullptr || pStacktrace == (PyTracebackObject*)Py_None)
    return "[No Stacktrace]";

  // Get the deepest trace possible.
  while (pStacktrace->tb_next) {
    pStacktrace = pStacktrace->tb_next;
  }
  PyFrameObject *frame = pStacktrace->tb_frame;
  Py_XINCREF(frame);    // TODO: why incref here?
  stacktrace_ = "Traceback (most recent call last):";
  while (frame) {
    stacktrace_ += '\n';
    PyCodeObject *f_code = PyFrame_GetCode(frame);
    int lineno = PyFrame_GetLineNumber(frame);
    stacktrace_ += "  File \"";
    stacktrace_ += PyUnicode_AsUTF8(f_code->co_filename);
    stacktrace_ += "\", line ";
    stacktrace_ += std::to_string(lineno);
    stacktrace_ += ", in ";
    stacktrace_ += PyUnicode_AsUTF8(f_code->co_name);
    Py_DECREF(f_code);    // TODO: why decref here?
    frame = frame->f_back;
  }
  hasStacktrace_ = true;
  return stacktrace_;
}

}  // namespace py_backend

Exception::Exception(std::string msg) :std::exception(), exception_() {
  exception_.exceptionObj_ = py_interop::asLocal<Value>(py_backend::newExceptionInstance(msg));
}

Exception::Exception(const script::Local<script::String> &message)
    : std::exception(), exception_() {
  exception_.exceptionObj_ = 
    py_interop::asLocal<Value>(py_backend::newExceptionInstance(message.toString()));
}

Exception::Exception(const script::Local<script::Value> &exception)
    : std::exception(), exception_({}) {
  exception_.exceptionObj_ = exception;
}

Local<Value> Exception::exception() const {
  return exception_.exceptionObj_.get();
}

std::string Exception::message() const noexcept {
  return exception_.getMessage();
}

std::string Exception::stacktrace() const noexcept {
  return exception_.getStacktrace();
}

const char *Exception::what() const noexcept {
  exception_.getMessage();
  return exception_.message_.c_str();
}

}  // namespace script
