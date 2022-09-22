#include "api/NativeAPI.h"
#include "api/NativeStdString.h"
#include <string>
using namespace std;

//////////////////// Class Definition ////////////////////

ClassDefine<NativeStdString> NativeStdStringBuilder =
    defineClass<NativeStdString>("NativeStdString")
        .constructor(&NativeStdString::constructor)
        .instanceProperty("npos", &NativeStdString::getNpos)

        .instanceFunction("clear", &NativeStdString::clear)
        .instanceFunction("size", &NativeStdString::size)
        .instanceFunction("length", &NativeStdString::length)
        .instanceFunction("capacity", &NativeStdString::capacity)
        .instanceFunction("empty", &NativeStdString::empty)
        .instanceFunction("front", &NativeStdString::front)
        .instanceFunction("back", &NativeStdString::back)
        .instanceFunction("pop_back", &NativeStdString::pop_back)
        .instanceFunction("shrink_to_fit", &NativeStdString::shrink_to_fit)
        .instanceFunction("at", &NativeStdString::at)
        .instanceFunction("append", &NativeStdString::append)
        .instanceFunction("push_back", &NativeStdString::push_back)
        .instanceFunction("assign", &NativeStdString::assign)
        .instanceFunction("insert", &NativeStdString::insert)
        .instanceFunction("erase", &NativeStdString::erase)
        .instanceFunction("find", &NativeStdString::find)
        .instanceFunction("rfind", &NativeStdString::rfind)
        .instanceFunction("substr", &NativeStdString::substr)
        .instanceFunction("compare", &NativeStdString::compare)
        .instanceFunction("reserve", &NativeStdString::reserve)
        .instanceFunction("resize", &NativeStdString::resize)

        .instanceFunction("toString", &NativeStdString::toString)
        .instanceFunction("asPointer", &NativeStdString::asPointer)
        .instanceFunction("clone", &NativeStdString::clone)
        .instanceFunction("destroy", &NativeStdString::destroy)
        .build();


//////////////////// Classes ////////////////////

NativeStdString::NativeStdString(const Local<Object>& scriptObj, std::string* ptr)
    :ScriptClass(scriptObj)
{
    set(ptr);
}

NativeStdString::NativeStdString(std::string* ptr)
    :ScriptClass(ScriptClass::ConstructFromCpp<NativeStdString>{})
{
    set(ptr);
}

std::string* NativeStdString::extract(Local<Value> v)
{
    if (EngineScope::currentEngine()->isInstanceOf<NativeStdString>(v))
        return (string*)(EngineScope::currentEngine()->getNativeInstance<NativeStdString>(v)->get());
    else
        return nullptr;
}

Local<Object> NativeStdString::newNativeStdString(std::string* ptr) {
    auto out = new NativeStdString(ptr);
    return out->getScriptObject();
}

NativeStdString* NativeStdString::constructor(const Arguments& args) {
    CHECK_ARGS_COUNT_C(args, 1);

    try {
        if (args[0].getKind() == ValueKind::kString) {
            return new NativeStdString(args.thiz(), new string(std::move(args[0].toStr())));
        }
        if (args[0].getKind() == ValueKind::kObject) {
            string* strPointer = static_cast<string*>(NativePointer::extract(args[0]));
            if (strPointer) // != nullptr
                return new NativeStdString(args.thiz(), strPointer);
        }
        LOG_WRONG_ARG_TYPE();
        return nullptr;
    }
    CATCH_C("Fail in NativeStdString::create NativeStdString!");
}

Local<Value> NativeStdString::getNpos() {
    try {
        return Number::newNumber((int64_t)std::string::npos);
    }
    CATCH("Fail in NativeStdString::getNpos!");
}

Local<Value> NativeStdString::clear() {
    try {
        mStr->clear();
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::clear!");
}

Local<Value> NativeStdString::size() {
    try {
        return Number::newNumber((int64_t)mStr->size());
    }
    CATCH("Fail in NativeStdString::size!");
}

Local<Value> NativeStdString::length() {
    try {
        return Number::newNumber((int64_t)mStr->length());
    }
    CATCH("Fail in NativeStdString::length!");
}

Local<Value> NativeStdString::capacity() {
    try {
        return Number::newNumber((int64_t)mStr->capacity());
    }
    CATCH("Fail in NativeStdString::capacity!");
}

Local<Value> NativeStdString::empty() {
    try {
        return Boolean::newBoolean(mStr->empty());
    }
    CATCH("Fail in NativeStdString::empty!");
}

Local<Value> NativeStdString::front() {
    try {
        return String::newString(string(mStr->front(), 1));
    }
    CATCH("Fail in NativeStdString::front!");
}

Local<Value> NativeStdString::back() {
    try {
        return String::newString(string(mStr->back(), 1));
    }
    CATCH("Fail in NativeStdString::back!");
}

Local<Value> NativeStdString::shrink_to_fit() {
    try {
        mStr->shrink_to_fit();
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::shrink_to_fit!");
}

Local<Value> NativeStdString::pop_back() {
    try {
        mStr->pop_back();
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::pop_back!");
}

Local<Value> NativeStdString::at(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(string(mStr->at(args[0].toInt()), 1));
    }
    catch (std::out_of_range e)
    {
        throw Exception(e.what());
    }
    CATCH("Fail in NativeStdString::at!");
}

Local<Value> NativeStdString::append(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        mStr->append(args[0].toStr());
        return args.thiz();
    }
    CATCH("Fail in NativeStdString::append!");
}

Local<Value> NativeStdString::push_back(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        mStr->push_back(args[0].toStr()[0]);
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::push_back!");
}

Local<Value> NativeStdString::assign(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        mStr->assign(args[0].toStr());
        return args.thiz();
    }
    CATCH("Fail in NativeStdString::assign!");
}

Local<Value> NativeStdString::insert(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try {
        mStr->insert(args[0].toInt(), args[1].toStr());
        return args.thiz();
    }
    CATCH("Fail in NativeStdString::insert!");
}

Local<Value> NativeStdString::erase(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        if (args.size() >= 2)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            mStr->erase(args[0].toInt(), args[1].toInt());
        }
        else
            mStr->erase(args[0].toInt());
        return args.thiz();
    }
    CATCH("Fail in NativeStdString::erase!");
}

Local<Value> NativeStdString::find(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        if (args.size() >= 2)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            return Number::newNumber((int64_t)mStr->find(args[0].toStr(), args[1].toInt()));
        }
        else
            return Number::newNumber((int64_t)mStr->find(args[0].toStr()));
    }
    CATCH("Fail in NativeStdString::find!");
}

Local<Value> NativeStdString::rfind(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        if (args.size() >= 2)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            return Number::newNumber((int64_t)mStr->rfind(args[0].toStr(), args[1].toInt()));
        }
        else
            return Number::newNumber((int64_t)mStr->rfind(args[0].toStr()));
    }
    CATCH("Fail in NativeStdString::rfind!");
}

Local<Value> NativeStdString::substr(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        string res;
        if (args.size() >= 2)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            res = std::move(mStr->substr(args[0].toInt(), args[1].toInt()));
        }
        else
            res = std::move(mStr->substr(args[0].toInt()));
        return newNativeStdString(new string(std::move(res)));
    }
    CATCH("Fail in NativeStdString::substr!");
}

Local<Value> NativeStdString::compare(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        return Number::newNumber(mStr->compare(args[0].toStr()));
    }
    CATCH("Fail in NativeStdString::compare!");
}

Local<Value> NativeStdString::reserve(const Arguments& args) {
    try {
        CHECK_ARGS_COUNT(args, 1);
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
        mStr->reserve(args[0].toInt());
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::reserve!");
}
Local<Value> NativeStdString::resize(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        mStr->resize(args[0].toInt());
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::resize!");
}

Local<Value> NativeStdString::asPointer() {
    try {
        return NativePointer::newNativePointer(mStr);
    }
    CATCH("Fail in NativeStdString::asPointer!");
}

Local<Value> NativeStdString::toString() {
    try {
        return String::newString(*mStr);
    }
    CATCH("Fail in NativeStdString::toString!");
}

Local<Value> NativeStdString::clone() {
    try {
        return NativeStdString::newNativeStdString(new string(*mStr));
    }
    CATCH("Fail in NativeStdString::clone!")
}

Local<Value> NativeStdString::destroy() {
    try {
        delete mStr;
        mStr = nullptr;
        return Local<Value>();
    }
    CATCH("Fail in NativeStdString::destroy!");
}