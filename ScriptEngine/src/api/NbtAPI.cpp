#include "APIHelp.h"
#include "NbtAPI.h"
#include <vector>
#include <string>
#include "ItemAPI.h"
#include "BlockAPI.h"
#include <llapi/mc/EndTag.hpp>
#include <llapi/mc/ByteTag.hpp>
#include <llapi/mc/ShortTag.hpp>
#include <llapi/mc/IntTag.hpp>
#include <llapi/mc/Int64Tag.hpp>
#include <llapi/mc/FloatTag.hpp>
#include <llapi/mc/DoubleTag.hpp>
#include <llapi/mc/ByteArrayTag.hpp>
#include <llapi/mc/StringTag.hpp>
#include <llapi/mc/ListTag.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <magic_enum/magic_enum.hpp>

using magic_enum::enum_cast;

using namespace std;


//////////////////// Class Definition ////////////////////

ClassDefine<void> NbtStaticBuilder =
    defineClass("NBT")
        .function("parseSNBT", &NbtStatic::parseSNBT)
        .function("parseBinaryNBT", &NbtStatic::parseBinaryNBT)
        .property("End", &NbtStatic::getType<Tag::Type::End>)
        .property("Byte", &NbtStatic::getType<Tag::Type::Byte>)
        .property("Short", &NbtStatic::getType<Tag::Type::Short>)
        .property("Int", &NbtStatic::getType<Tag::Type::Int>)
        .property("Long", &NbtStatic::getType<Tag::Type::Int64>)
        .property("Float", &NbtStatic::getType<Tag::Type::Float>)
        .property("Double", &NbtStatic::getType<Tag::Type::Double>)
        .property("ByteArray", &NbtStatic::getType<Tag::Type::ByteArray>)
        .property("String", &NbtStatic::getType<Tag::Type::String>)
        .property("List", &NbtStatic::getType<Tag::Type::List>)
        .property("Compound", &NbtStatic::getType<Tag::Type::Compound>)

        // For Compatibility
        .function("createTag", &NbtStatic::newTag)
        .function("newTag", &NbtStatic::newTag)
        .build();

ClassDefine<NbtEndClass> NbtEndClassBuilder =
    defineClass<NbtEndClass>("NbtEnd")
        .constructor(&NbtEndClass::constructor)
        .instanceFunction("getType", &NbtEndClass::getType)
        .instanceFunction("toString", &NbtEndClass::toString)
        .instanceFunction("set", &NbtEndClass::set)
        .instanceFunction("get", &NbtEndClass::get)
        .build();

ClassDefine<NbtByteClass> NbtByteClassBuilder =
    defineClass<NbtByteClass>("NbtByte")
        .constructor(&NbtByteClass::constructor)
        .instanceFunction("getType", &NbtByteClass::getType)
        .instanceFunction("toString", &NbtByteClass::toString)
        .instanceFunction("set", &NbtByteClass::set)
        .instanceFunction("get", &NbtByteClass::get)
        .build();

ClassDefine<NbtShortClass> NbtShortClassBuilder =
    defineClass<NbtShortClass>("NbtShort")
        .constructor(&NbtShortClass::constructor)
        .instanceFunction("getType", &NbtShortClass::getType)
        .instanceFunction("toString", &NbtShortClass::toString)
        .instanceFunction("set", &NbtShortClass::set)
        .instanceFunction("get", &NbtShortClass::get)
        .build();

ClassDefine<NbtIntClass> NbtIntClassBuilder =
    defineClass<NbtIntClass>("NbtInt")
        .constructor(&NbtIntClass::constructor)
        .instanceFunction("getType", &NbtIntClass::getType)
        .instanceFunction("toString", &NbtIntClass::toString)
        .instanceFunction("set", &NbtIntClass::set)
        .instanceFunction("get", &NbtIntClass::get)
        .build();

ClassDefine<NbtLongClass> NbtLongClassBuilder =
    defineClass<NbtLongClass>("NbtLong")
        .constructor(&NbtLongClass::constructor)
        .instanceFunction("getType", &NbtLongClass::getType)
        .instanceFunction("toString", &NbtLongClass::toString)
        .instanceFunction("set", &NbtLongClass::set)
        .instanceFunction("get", &NbtLongClass::get)
        .build();

ClassDefine<NbtFloatClass> NbtFloatClassBuilder =
    defineClass<NbtFloatClass>("NbtFloat")
        .constructor(&NbtFloatClass::constructor)
        .instanceFunction("getType", &NbtFloatClass::getType)
        .instanceFunction("toString", &NbtFloatClass::toString)
        .instanceFunction("set", &NbtFloatClass::set)
        .instanceFunction("get", &NbtFloatClass::get)
        .build();

ClassDefine<NbtDoubleClass> NbtDoubleClassBuilder =
    defineClass<NbtDoubleClass>("NbtDouble")
        .constructor(&NbtDoubleClass::constructor)
        .instanceFunction("getType", &NbtDoubleClass::getType)
        .instanceFunction("toString", &NbtDoubleClass::toString)
        .instanceFunction("set", &NbtDoubleClass::set)
        .instanceFunction("get", &NbtDoubleClass::get)
        .build();

ClassDefine<NbtStringClass> NbtStringClassBuilder =
    defineClass<NbtStringClass>("NbtString")
        .constructor(&NbtStringClass::constructor)
        .instanceFunction("getType", &NbtStringClass::getType)
        .instanceFunction("toString", &NbtStringClass::toString)
        .instanceFunction("set", &NbtStringClass::set)
        .instanceFunction("get", &NbtStringClass::get)
        .build();

ClassDefine<NbtByteArrayClass> NbtByteArrayClassBuilder =
    defineClass<NbtByteArrayClass>("NbtByteArray")
        .constructor(&NbtByteArrayClass::constructor)
        .instanceFunction("getType", &NbtByteArrayClass::getType)
        .instanceFunction("toString", &NbtByteArrayClass::toString)
        .instanceFunction("set", &NbtByteArrayClass::set)
        .instanceFunction("get", &NbtByteArrayClass::get)
        .build();

ClassDefine<NbtListClass> NbtListClassBuilder =
    defineClass<NbtListClass>("NbtList")
        .constructor(&NbtListClass::constructor)
        .instanceFunction("getType", &NbtListClass::getType)
        .instanceFunction("toString", &NbtListClass::toString)
        .instanceFunction("getSize", &NbtListClass::getSize)
        .instanceFunction("getTypeOf", &NbtListClass::getTypeOf)
        .instanceFunction("setEnd", &NbtListClass::setEnd)
        .instanceFunction("setByte", &NbtListClass::setByte)
        .instanceFunction("setInt", &NbtListClass::setInt)
        .instanceFunction("setShort", &NbtListClass::setShort)
        .instanceFunction("setLong", &NbtListClass::setLong)
        .instanceFunction("setFloat", &NbtListClass::setFloat)
        .instanceFunction("setDouble", &NbtListClass::setDouble)
        .instanceFunction("setString", &NbtListClass::setString)
        .instanceFunction("setByteArray", &NbtListClass::setByteArray)
        .instanceFunction("setTag", &NbtListClass::setTag)
        .instanceFunction("addTag", &NbtListClass::addTag)
        .instanceFunction("removeTag", &NbtListClass::removeTag)
        .instanceFunction("getData", &NbtListClass::getData)
        .instanceFunction("getTag", &NbtListClass::getTag)
        .instanceFunction("toArray", &NbtListClass::toArray)
        .build();

ClassDefine<NbtCompoundClass> NbtCompoundClassBuilder =
    defineClass<NbtCompoundClass>("NbtCompound")
        .constructor(&NbtCompoundClass::constructor)
        .instanceFunction("getType", &NbtCompoundClass::getType)
        .instanceFunction("toString", &NbtCompoundClass::toString)
        .instanceFunction("getKeys", &NbtCompoundClass::getKeys)
        .instanceFunction("getTypeOf", &NbtCompoundClass::getTypeOf)
        .instanceFunction("setEnd", &NbtCompoundClass::setEnd)
        .instanceFunction("setByte", &NbtCompoundClass::setByte)
        .instanceFunction("setInt", &NbtCompoundClass::setInt)
        .instanceFunction("setShort", &NbtCompoundClass::setShort)
        .instanceFunction("setLong", &NbtCompoundClass::setLong)
        .instanceFunction("setFloat", &NbtCompoundClass::setFloat)
        .instanceFunction("setDouble", &NbtCompoundClass::setDouble)
        .instanceFunction("setString", &NbtCompoundClass::setString)
        .instanceFunction("setByteArray", &NbtCompoundClass::setByteArray)
        .instanceFunction("setTag", &NbtCompoundClass::setTag)
        .instanceFunction("removeTag", &NbtCompoundClass::removeTag)
        .instanceFunction("getData", &NbtCompoundClass::getData)
        .instanceFunction("getTag", &NbtCompoundClass::getTag)
        .instanceFunction("toObject", &NbtCompoundClass::toObject)
        .instanceFunction("toSNBT", &NbtCompoundClass::toSNBT)
        .instanceFunction("toBinaryNBT", &NbtCompoundClass::toBinaryNBT)
        .instanceFunction("destroy", &NbtCompoundClass::destroy)
        .build();


//////////////////// Classes NbtEnd ////////////////////

NbtEndClass::NbtEndClass(const Local<Object>& scriptObj, std::unique_ptr<EndTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtEndClass::NbtEndClass(std::unique_ptr<EndTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtEndClass>{}) {
    this->nbt = std::move(p);
}

NbtEndClass* NbtEndClass::constructor(const Arguments& args) {
    try {
        auto tag = EndTag::create();
        return new NbtEndClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create EndTag!");
}

EndTag* NbtEndClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtEndClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtEndClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtEndClass::pack(EndTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<EndTag> nbt(tag);
            auto* nbtObj = new NbtEndClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtEndClass(Tag::asTypedTag<EndTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtEnd!");
}

Local<Value> NbtEndClass::pack(std::unique_ptr<EndTag> tag) {
    try {
        return (new NbtEndClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtEnd!");
}

Local<Value> NbtEndClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::End);
}

Local<Value> NbtEndClass::get(const Arguments& args) {
    try {
        return Local<Value>();
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtEndClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtEndClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtByte ////////////////////

NbtByteClass::NbtByteClass(const Local<Object>& scriptObj, std::unique_ptr<ByteTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtByteClass::NbtByteClass(std::unique_ptr<ByteTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtByteClass>{}) {
    this->nbt = std::move(p);
}

NbtByteClass* NbtByteClass::constructor(const Arguments& args) {
    try {
        auto tag = ByteTag::create((char)args[0].toInt());
        return new NbtByteClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create ByteTag!");
}

ByteTag* NbtByteClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtByteClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtByteClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtByteClass::pack(ByteTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<ByteTag> nbt(tag);
            auto* nbtObj = new NbtByteClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtByteClass(Tag::asTypedTag<ByteTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtByte!");
}

Local<Value> NbtByteClass::pack(std::unique_ptr<ByteTag> tag) {
    try {
        return (new NbtByteClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtByte!");
}

Local<Value> NbtByteClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Byte);
}

Local<Value> NbtByteClass::get(const Arguments& args) {
    try {
        return Number::newNumber(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtByteClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtByteClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        return Boolean::newBoolean(nbt->set((char)args[0].toInt()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtInt ////////////////////

NbtIntClass::NbtIntClass(const Local<Object>& scriptObj, std::unique_ptr<IntTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtIntClass::NbtIntClass(std::unique_ptr<IntTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtIntClass>{}) {
    this->nbt = std::move(p);
}

NbtIntClass* NbtIntClass::constructor(const Arguments& args) {
    try {
        auto tag = IntTag::create(args[0].toInt());
        return new NbtIntClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create IntTag!");
}

IntTag* NbtIntClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtIntClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtIntClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtIntClass::pack(IntTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<IntTag> nbt(tag);
            auto* nbtObj = new NbtIntClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtIntClass(Tag::asTypedTag<IntTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtInt!");
}

Local<Value> NbtIntClass::pack(std::unique_ptr<IntTag> tag) {
    try {
        return (new NbtIntClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtInt!");
}

Local<Value> NbtIntClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Int);
}

Local<Value> NbtIntClass::get(const Arguments& args) {
    try {
        return Number::newNumber(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtIntClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtIntClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        return Boolean::newBoolean(nbt->set(args[0].toInt()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtShort ////////////////////

NbtShortClass::NbtShortClass(const Local<Object>& scriptObj, std::unique_ptr<ShortTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtShortClass::NbtShortClass(std::unique_ptr<ShortTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtShortClass>{}) {
    this->nbt = std::move(p);
}

NbtShortClass* NbtShortClass::constructor(const Arguments& args) {
    try {
        auto tag = ShortTag::create(args[0].toInt());
        return new NbtShortClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create ShortTag!");
}

ShortTag* NbtShortClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtShortClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtShortClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtShortClass::pack(ShortTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<ShortTag> nbt(tag);
            auto* nbtObj = new NbtShortClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtShortClass(Tag::asTypedTag<ShortTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtShort!");
}

Local<Value> NbtShortClass::pack(std::unique_ptr<ShortTag> tag) {
    try {
        return (new NbtShortClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtShort!");
}

Local<Value> NbtShortClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Short);
}

Local<Value> NbtShortClass::get(const Arguments& args) {
    try {
        return Number::newNumber(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtShortClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtShortClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        return Boolean::newBoolean(nbt->set(args[0].toInt()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtLong ////////////////////

NbtLongClass::NbtLongClass(const Local<Object>& scriptObj, std::unique_ptr<Int64Tag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtLongClass::NbtLongClass(std::unique_ptr<Int64Tag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtLongClass>{}) {
    this->nbt = std::move(p);
}

NbtLongClass* NbtLongClass::constructor(const Arguments& args) {
    try {
        auto tag = Int64Tag::create(args[0].asNumber().toInt64());
        return new NbtLongClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create LongTag!");
}

Int64Tag* NbtLongClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtLongClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtLongClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtLongClass::pack(Int64Tag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<Int64Tag> nbt(tag);
            auto* nbtObj = new NbtLongClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtLongClass(Tag::asTypedTag<Int64Tag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtLong!");
}

Local<Value> NbtLongClass::pack(std::unique_ptr<Int64Tag> tag) {
    try {
        return (new NbtLongClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtLong!");
}

Local<Value> NbtLongClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Int64);
}

Local<Value> NbtLongClass::get(const Arguments& args) {
    try {
        return Number::newNumber(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtLongClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtLongClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        return Boolean::newBoolean(nbt->set(args[0].asNumber().toInt64()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtFloat ////////////////////

NbtFloatClass::NbtFloatClass(const Local<Object>& scriptObj, std::unique_ptr<FloatTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtFloatClass::NbtFloatClass(std::unique_ptr<FloatTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtFloatClass>{}) {
    this->nbt = std::move(p);
}

NbtFloatClass* NbtFloatClass::constructor(const Arguments& args) {
    try {
        auto tag = FloatTag::create(args[0].asNumber().toFloat());
        return new NbtFloatClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create FloatTag!");
}

FloatTag* NbtFloatClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtFloatClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtFloatClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtFloatClass::pack(FloatTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<FloatTag> nbt(tag);
            auto* nbtObj = new NbtFloatClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtFloatClass(Tag::asTypedTag<FloatTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtFloat!");
}

Local<Value> NbtFloatClass::pack(std::unique_ptr<FloatTag> tag) {
    try {
        return (new NbtFloatClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtFloat!");
}

Local<Value> NbtFloatClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Float);
}

Local<Value> NbtFloatClass::get(const Arguments& args) {
    try {
        return Number::newNumber(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtFloatClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtFloatClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        return Boolean::newBoolean(nbt->set(args[0].asNumber().toFloat()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtDouble ////////////////////

NbtDoubleClass::NbtDoubleClass(const Local<Object>& scriptObj, std::unique_ptr<DoubleTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtDoubleClass::NbtDoubleClass(std::unique_ptr<DoubleTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtDoubleClass>{}) {
    this->nbt = std::move(p);
}

NbtDoubleClass* NbtDoubleClass::constructor(const Arguments& args) {
    try {
        auto tag = DoubleTag::create(args[0].asNumber().toDouble());
        return new NbtDoubleClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create DoubleTag!");
}

DoubleTag* NbtDoubleClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtDoubleClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtDoubleClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtDoubleClass::pack(DoubleTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<DoubleTag> nbt(tag);
            auto* nbtObj = new NbtDoubleClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtDoubleClass(Tag::asTypedTag<DoubleTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtDouble!");
}

Local<Value> NbtDoubleClass::pack(std::unique_ptr<DoubleTag> tag) {
    try {
        return (new NbtDoubleClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtDouble!");
}

Local<Value> NbtDoubleClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Double);
}

Local<Value> NbtDoubleClass::get(const Arguments& args) {
    try {
        return Number::newNumber(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtDoubleClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtDoubleClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        return Boolean::newBoolean(nbt->set(args[0].asNumber().toDouble()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtString ////////////////////

NbtStringClass::NbtStringClass(const Local<Object>& scriptObj, std::unique_ptr<StringTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtStringClass::NbtStringClass(std::unique_ptr<StringTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtStringClass>{}) {
    this->nbt = std::move(p);
}

NbtStringClass* NbtStringClass::constructor(const Arguments& args) {
    try {
        auto tag = StringTag::create(args[0].toStr());
        return new NbtStringClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create StringTag!");
}

StringTag* NbtStringClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtStringClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtStringClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtStringClass::pack(StringTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<StringTag> nbt(tag);
            auto* nbtObj = new NbtStringClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtStringClass(Tag::asTypedTag<StringTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtString!");
}

Local<Value> NbtStringClass::pack(std::unique_ptr<StringTag> tag) {
    try {
        return (new NbtStringClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtString!");
}

Local<Value> NbtStringClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::String);
}

Local<Value> NbtStringClass::get(const Arguments& args) {
    try {
        return String::newString(nbt->get());
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtStringClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtStringClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        return Boolean::newBoolean(nbt->set(args[0].toStr()));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtByteArray ////////////////////

NbtByteArrayClass::NbtByteArrayClass(const Local<Object>& scriptObj, std::unique_ptr<ByteArrayTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtByteArrayClass::NbtByteArrayClass(std::unique_ptr<ByteArrayTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtByteArrayClass>{}) {
    this->nbt = std::move(p);
}

NbtByteArrayClass* NbtByteArrayClass::constructor(const Arguments& args) {
    try {
        auto buf = args[0].asByteBuffer();
        auto tag = ByteArrayTag::create((char*)buf.getRawBytes(), buf.byteLength());
        return new NbtByteArrayClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create ByteArrayTag!");
}

ByteArrayTag* NbtByteArrayClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtByteArrayClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtByteArrayClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtByteArrayClass::pack(ByteArrayTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<ByteArrayTag> nbt(tag);
            auto* nbtObj = new NbtByteArrayClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtByteArrayClass(Tag::asTypedTag<ByteArrayTag>(tag->copy())))->getScriptObject();
    }
    CATCH("Fail in construct NbtByteArray!");
}

Local<Value> NbtByteArrayClass::pack(std::unique_ptr<ByteArrayTag> tag) {
    try {
        return (new NbtByteArrayClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtByteArray!");
}

Local<Value> NbtByteArrayClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::ByteArray);
}

Local<Value> NbtByteArrayClass::get(const Arguments& args) {
    try {
        auto& data = nbt->value();
        return ByteBuffer::newByteBuffer(data.data.get(), data.size);
    }
    CATCH("Fail in NbtValueGet!")
}

Local<Value> NbtByteArrayClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtByteArrayClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        Local<ByteBuffer> buf = args[0].asByteBuffer();
        return Boolean::newBoolean(nbt->set(TagMemoryChunk((char*)buf.getRawBytes(), buf.byteLength())));
    }
    CATCH("Fail in NbtValueSet!")
}


//////////////////// Classes NbtList ////////////////////

NbtListClass::NbtListClass(const Local<Object>& scriptObj, std::unique_ptr<ListTag> p)
: ScriptClass(scriptObj) {
    this->nbt = std::move(p);
}

NbtListClass::NbtListClass(std::unique_ptr<ListTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtListClass>{}) {
    this->nbt = std::move(p);
}

////////////////// Helper //////////////////
void NbtListClassAddHelper(ListTag* tag, Local<Array>& arr) {
    if (arr.size() > 0) {
        Local<Value> t = arr.get(0);
        if (IsInstanceOf<NbtEndClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtEndClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtByteClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtByteClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtShortClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtShortClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtIntClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtIntClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtLongClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtLongClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtFloatClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtFloatClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtDoubleClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtDoubleClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtStringClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtStringClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtByteArrayClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtByteArrayClass::extract(arr.get(i))->copy());
        else if (IsInstanceOf<NbtListClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtListClass::extract(arr.get(i))->copyList());
        else if (IsInstanceOf<NbtCompoundClass>(t))
            for (int i = 0; i < arr.size(); ++i)
                tag->add(NbtCompoundClass::extract(arr.get(i))->clone());
        else if (t.isArray()) {
            for (int i = 0; i < arr.size(); ++i) {
                auto arrTag = ListTag::create();
                auto data = arr.get(i).asArray();
                NbtListClassAddHelper(arrTag.get(), data);
                tag->add(std::move(arrTag));
            }
        } else if (t.isObject()) {
            for (int i = 0; i < arr.size(); ++i) {
                auto objTag = CompoundTag::create();
                auto data = arr.get(i).asObject();
                NbtCompoundClassAddHelper(objTag.get(), data);
                tag->add(std::move(objTag));
            }
        } else {
            throw script::Exception("Wrong Type of data to set into NBT List!");
        }
    }
}

NbtListClass* NbtListClass::constructor(const Arguments& args) {
    try {
        auto tag = ListTag::create();

        if (args.size() >= 1 && args[0].isArray()) {
            auto arr = args[0].asArray();
            NbtListClassAddHelper(tag.get(), arr);
        }

        return new NbtListClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create ListTag!");
}

ListTag* NbtListClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtListClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtListClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtListClass::pack(ListTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<ListTag> nbt(tag);
            auto* nbtObj = new NbtListClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtListClass(tag->copyList()))->getScriptObject();
    }
    CATCH("Fail in construct NbtList!");
}

Local<Value> NbtListClass::pack(std::unique_ptr<ListTag> tag) {
    try {
        return (new NbtListClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtList!");
}

Local<Value> NbtListClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::List);
}

Local<Value> NbtListClass::getSize(const Arguments& args) {
    try {
        return Number::newNumber((int)nbt->getSize());
    }
    CATCH("Fail in NBT GetSize!");
}

Local<Value> NbtListClass::getTypeOf(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            return Local<Value>();
        }

        return Number::newNumber(int(list[index]->getTagType()));
    }
    CATCH("Fail in NBT GetTypeOf!");
}

Local<Value> NbtListClass::setEnd(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::End) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asEndTag()->set();
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetEnd!");
}

Local<Value> NbtListClass::setByte(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::Byte) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asByteTag()->set(args[1].toInt());
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetByte!");
}

Local<Value> NbtListClass::setInt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::Int) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asIntTag()->set(args[1].toInt());
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetInt!");
}

Local<Value> NbtListClass::setShort(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::Short) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asShortTag()->set(args[1].toInt());
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetShort!");
}

Local<Value> NbtListClass::setLong(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::Int64) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asInt64Tag()->set(args[1].asNumber().toInt64());
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetLong!");
}

Local<Value> NbtListClass::setFloat(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::Float) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asFloatTag()->set(args[1].asNumber().toFloat());
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetFloat!");
}

Local<Value> NbtListClass::setDouble(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::Double) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asDoubleTag()->set(args[1].asNumber().toDouble());
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetDouble!");
}

Local<Value> NbtListClass::setString(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::String) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            list[index]->asStringTag()->set(args[1].toStr());
        }

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetString!");
}

Local<Value> NbtListClass::setByteArray(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kByteBuffer);

    try {
        auto list = nbt->get();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
        } else if (list[0]->getTagType() != Tag::Type::ByteArray) {
            LOG_ERROR_WITH_SCRIPT_INFO("Set wrong type of element into NBT List!");
        } else {
            auto data = args[1].asByteBuffer();
            list[index]->asByteArrayTag()->set(TagMemoryChunk((char*)data.getRawBytes(), data.byteLength()));
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetByteArray!");
}

Local<Value> NbtListClass::setTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto& list = nbt->value();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
            return Local<Value>();
        }

        if (IsInstanceOf<NbtEndClass>(args[1])) {
            list[index] = NbtEndClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtByteClass>(args[1])) {
            list[index] = NbtByteClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtShortClass>(args[1])) {
            list[index] = NbtShortClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtIntClass>(args[1])) {
            list[index] = NbtIntClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtLongClass>(args[1])) {
            list[index] = NbtLongClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtFloatClass>(args[1])) {
            list[index] = NbtFloatClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtDoubleClass>(args[1])) {
            list[index] = NbtDoubleClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtStringClass>(args[1])) {
            list[index] = NbtStringClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtByteArrayClass>(args[1])) {
            list[index] = NbtByteArrayClass::extract(args[1])->copy().release();
        } else if (IsInstanceOf<NbtListClass>(args[1])) {
            list[index] = NbtListClass::extract(args[1])->copyList().release();
        } else if (IsInstanceOf<NbtCompoundClass>(args[1])) {
            list[index] = NbtCompoundClass::extract(args[1])->clone().release();
        } else {
            LOG_ERROR_WITH_SCRIPT_INFO("Unknown type! Cannot set Tag into List");
            return Local<Value>();
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetTag!");
}

Local<Value> NbtListClass::addTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        if (IsInstanceOf<NbtEndClass>(args[0])) {
            nbt->add(NbtEndClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtByteClass>(args[0])) {
            nbt->add(NbtByteClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtShortClass>(args[0])) {
            nbt->add(NbtShortClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtIntClass>(args[0])) {
            nbt->add(NbtIntClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtLongClass>(args[0])) {
            nbt->add(NbtLongClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtFloatClass>(args[0])) {
            nbt->add(NbtFloatClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtDoubleClass>(args[0])) {
            nbt->add(NbtDoubleClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtStringClass>(args[0])) {
            nbt->add(NbtStringClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtByteArrayClass>(args[0])) {
            nbt->add(NbtByteArrayClass::extract(args[0])->copy());
        } else if (IsInstanceOf<NbtListClass>(args[0])) {
            nbt->add(NbtListClass::extract(args[0])->copyList());
        } else if (IsInstanceOf<NbtCompoundClass>(args[0])) {
            nbt->add(NbtCompoundClass::extract(args[0])->clone());
        } else {
            LOG_ERROR_WITH_SCRIPT_INFO("Unknown type! Cannot add Tag into List");
            return Local<Value>();
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT AddTag!");
}

Local<Value> NbtListClass::removeTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto& list = nbt->value();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            LOG_ERROR_WITH_SCRIPT_INFO("Bad Index of NBT List!");
            return Local<Value>();
        }

        list.erase(list.begin() + index); //===== delete?
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetTag!");
}

Local<Value> NbtListClass::getData(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto& list = nbt->value();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            return Local<Value>();
        }

        return Tag2Value(list[index]);
    }
    CATCH("Fail in NBTgetData!")
}

Local<Value> NbtListClass::getTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto& list = nbt->value();
        auto index = args[0].toInt();

        if (index >= list.size() || index < 0) {
            return Local<Value>();
        }

        Local<Value> res;
        switch (list[index]->getTagType()) {
            case Tag::Type::End:
                res = NbtEndClass::pack(list[index]->asEndTag(), true); // share ptr
                break;
            case Tag::Type::Byte:
                res = NbtByteClass::pack(list[index]->asByteTag(), true); // share ptr
                break;
            case Tag::Type::Short:
                res = NbtShortClass::pack(list[index]->asShortTag(), true); // share ptr
                break;
            case Tag::Type::Int:
                res = NbtIntClass::pack(list[index]->asIntTag(), true); // share ptr
                break;
            case Tag::Type::Int64:
                res = NbtLongClass::pack(list[index]->asInt64Tag(), true); // share ptr
                break;
            case Tag::Type::Float:
                res = NbtFloatClass::pack(list[index]->asFloatTag(), true); // share ptr
                break;
            case Tag::Type::Double:
                res = NbtDoubleClass::pack(list[index]->asDoubleTag(), true); // share ptr
                break;
            case Tag::Type::String:
                res = NbtStringClass::pack(list[index]->asStringTag(), true); // share ptr
                break;
            case Tag::Type::ByteArray:
                res = NbtByteArrayClass::pack(list[index]->asByteArrayTag(), true); // share ptr
                break;
            case Tag::Type::List:
                res = NbtListClass::pack(list[index]->asListTag(), true); // share ptr
                break;
            case Tag::Type::Compound:
                res = NbtCompoundClass::pack(list[index]->asCompoundTag(), true); // share ptr
                break;
            default:
                res = Local<Value>();
                break;
        }
        return res;
    }
    CATCH("Fail in NBT GetTag!");
}

Local<Value> NbtListClass::toArray(const Arguments& args) {
    try {
        auto& list = nbt->value();
        Local<Array> arr = Array::newArray();

        for (auto& tag : list) {
            arr.add(Tag2Value(tag, true));
        }
        return arr;
    }
    CATCH("Fail in NBTtoArray!");
}

Local<Value> NbtListClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}


//////////////////// Classes NbtCompound ////////////////////

NbtCompoundClass::NbtCompoundClass(const Local<Object>& scriptObj, std::unique_ptr<CompoundTag> p)
: ScriptClass(scriptObj) {
    nbt = std::move(p);
}

NbtCompoundClass::NbtCompoundClass(std::unique_ptr<CompoundTag> p)
: ScriptClass(ScriptClass::ConstructFromCpp<NbtCompoundClass>{}) {
    nbt = std::move(p);
}

////////////////// Helper //////////////////
void NbtCompoundClassAddHelper(CompoundTag* tag, Local<Object>& obj) {
    auto keys = obj.getKeyNames();
    if (keys.size() > 0) {
        for (int i = 0; i < keys.size(); ++i) {
            Local<Value> t = obj.get(keys[i]);
            if (IsInstanceOf<NbtEndClass>(t))
                tag->put(keys[i], NbtEndClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtByteClass>(t))
                tag->put(keys[i], NbtByteClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtShortClass>(t))
                tag->put(keys[i], NbtShortClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtIntClass>(t))
                tag->put(keys[i], NbtIntClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtLongClass>(t))
                tag->put(keys[i], NbtLongClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtFloatClass>(t))
                tag->put(keys[i], NbtFloatClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtDoubleClass>(t))
                tag->put(keys[i], NbtDoubleClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtStringClass>(t))
                tag->put(keys[i], NbtStringClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtByteArrayClass>(t))
                tag->put(keys[i], NbtByteArrayClass::extract(obj.get(keys[i]))->copy());
            else if (IsInstanceOf<NbtListClass>(t))
                tag->put(keys[i], NbtListClass::extract(obj.get(keys[i]))->copyList());
            else if (IsInstanceOf<NbtCompoundClass>(t))
                tag->put(keys[i], NbtCompoundClass::extract(obj.get(keys[i]))->clone());
            else if (t.isArray()) {
                auto arrTag = ListTag::create();
                auto data = obj.get(keys[i]).asArray();
                NbtListClassAddHelper(arrTag.get(), data);
                tag->put(keys[i], std::move(arrTag));
            } else if (t.isObject()) {
                auto objTag = CompoundTag::create();
                auto data = obj.get(keys[i]).asObject();
                NbtCompoundClassAddHelper(objTag.get(), data);
                tag->put(keys[i], std::move(objTag));
            } else {
                LOG_ERROR_WITH_SCRIPT_INFO("Wrong Type of data to set into NBT Compound!");
            }
        }
    }
}

NbtCompoundClass* NbtCompoundClass::constructor(const Arguments& args) {
    try {
        auto tag = CompoundTag::create();

        if (args.size() >= 1 && args[0].isObject()) {
            auto obj = args[0].asObject();
            NbtCompoundClassAddHelper(tag.get(), obj);
        }

        return new NbtCompoundClass(args.thiz(), std::move(tag));
    }
    CATCH_C("Fail in Create ListTag!");
}

CompoundTag* NbtCompoundClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<NbtCompoundClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<NbtCompoundClass>(v)->nbt.get();
    else
        return nullptr;
}

Local<Value> NbtCompoundClass::pack(CompoundTag* tag, bool noDelete) {
    try {
        if (noDelete) // unique_ptr 共享指针 + noDelete
        {
            std::unique_ptr<CompoundTag> nbt(tag);
            auto* nbtObj = new NbtCompoundClass(std::move(nbt));
            nbtObj->canDelete = false;
            return nbtObj->getScriptObject();
        } else
            return (new NbtCompoundClass(tag->clone()))->getScriptObject();
    }
    CATCH("Fail in construct NbtCompound!");
}

Local<Value> NbtCompoundClass::pack(std::unique_ptr<CompoundTag> tag) {
    try {
        return (new NbtCompoundClass(std::move(tag)))->getScriptObject();
    }
    CATCH("Fail in construct NbtCompound!");
}

Local<Value> NbtCompoundClass::getType(const Arguments& args) {
    return Number::newNumber((int)Tag::Type::Compound);
}


Local<Value> NbtCompoundClass::getKeys(const Arguments& args) {
    try {
        Local<Array> arr = Array::newArray();
        auto& list = nbt->value();
        for (auto& [k, v] : list) {
            arr.add(String::newString(k));
        }

        return arr;
    }
    CATCH("Fail in NBT GetKeys!");
}

Local<Value> NbtCompoundClass::getTypeOf(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto& list = nbt->value();
        auto key = args[0].toStr();

        return Number::newNumber(int(list.at(key).getTagType()));
    } catch (const out_of_range& e) {
        return Local<Value>();
    }
    CATCH("Fail in NBT GetTypeOf!");
}

Local<Value> NbtCompoundClass::setEnd(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto key = args[0].toStr();
        nbt->putByte(key, (char)0);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetEnd!");
}

Local<Value> NbtCompoundClass::setByte(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto key = args[0].toStr();
        auto data = char(args[1].toInt());
        nbt->putByte(key, data);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetByte!");
}

Local<Value> NbtCompoundClass::setInt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto key = args[0].toStr();
        auto data = int(args[1].toInt());
        nbt->putInt(key, data);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetInt!");
}

Local<Value> NbtCompoundClass::setShort(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto key = args[0].toStr();
        auto data = short(args[1].toInt());
        nbt->putShort(key, data);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetShort!");
}

Local<Value> NbtCompoundClass::setLong(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto key = args[0].toStr();
        auto data = args[1].asNumber().toInt64();
        nbt->putInt64(key, data);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetLong!");
}

Local<Value> NbtCompoundClass::setFloat(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto key = args[0].toStr();
        auto data = args[1].asNumber().toFloat();
        nbt->putFloat(key, data);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetFloat!");
}

Local<Value> NbtCompoundClass::setDouble(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);

    try {
        auto& list = nbt->value();
        auto key = args[0].toStr();
        auto data = args[1].asNumber().toDouble();

        list.at(key).asDoubleTag()->value() = data;
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetDouble!");
}

Local<Value> NbtCompoundClass::setString(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try {
        auto key = args[0].toStr();
        auto data = args[1].toStr();
        nbt->putString(key, data);

        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetString!");
}

Local<Value> NbtCompoundClass::setByteArray(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kByteBuffer);

    try {
        auto key = args[0].toStr();
        auto data = args[1].asByteBuffer();

        nbt->putByteArray(key, (char*)data.getRawBytes(), data.byteLength());
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetString!");
}

Local<Value> NbtCompoundClass::setTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto key = args[0].toStr();

        if (IsInstanceOf<NbtEndClass>(args[1])) {
            nbt->put(key, std::move(NbtEndClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtByteClass>(args[1])) {
            nbt->put(key, std::move(NbtByteClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtShortClass>(args[1])) {
            nbt->put(key, std::move(NbtShortClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtIntClass>(args[1])) {
            nbt->put(key, std::move(NbtIntClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtLongClass>(args[1])) {
            nbt->put(key, std::move(NbtLongClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtFloatClass>(args[1])) {
            nbt->put(key, std::move(NbtFloatClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtDoubleClass>(args[1])) {
            nbt->put(key, std::move(NbtDoubleClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtStringClass>(args[1])) {
            nbt->put(key, std::move(NbtStringClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtByteArrayClass>(args[1])) {
            nbt->put(key, std::move(NbtByteArrayClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtListClass>(args[1])) {
            nbt->put(key, std::move(NbtListClass::extract(args[1])->copy()));
        } else if (IsInstanceOf<NbtCompoundClass>(args[1])) {
            nbt->put(key, std::move(NbtCompoundClass::extract(args[1])->copy()));
        } else {
            LOG_ERROR_WITH_SCRIPT_INFO("Unknown type! Cannot set Tag into Compound");
            return Local<Value>();
        }
        return this->getScriptObject();
    }
    CATCH("Fail in NBT SetTag!");
}

Local<Value> NbtCompoundClass::removeTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto& list = nbt->value();
        auto key = args[0].toStr();

        list.erase(key);
        return this->getScriptObject();
    } catch (const out_of_range& e) {
        LOG_ERROR_WITH_SCRIPT_INFO("Key no found in NBT Compound!");
        return Local<Value>();
    }
    CATCH("Fail in NBT RemoveTag!");
}

Local<Value> NbtCompoundClass::getData(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto& list = nbt->value();
        auto key = args[0].toStr();

        return Tag2Value(list.at(key).asTag());
    } catch (const out_of_range& e) {
        return Local<Value>();
    }
    CATCH("Fail in NBT GetData!")
}

Local<Value> NbtCompoundClass::getTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto key = args[0].toStr();

        Local<Value> res;
        switch (nbt->value().at(key).getTagType()) {
            case Tag::Type::End:
                res = NbtEndClass::pack(nbt->value().at(key).asEndTag(), true); // share ptr
                break;
            case Tag::Type::Byte:
                res = NbtByteClass::pack((ByteTag*)nbt->getByteTag(key), true); // share ptr
                break;
            case Tag::Type::Short:
                res = NbtShortClass::pack((ShortTag*)nbt->getShortTag(key), true); // share ptr
                break;
            case Tag::Type::Int:
                res = NbtIntClass::pack((IntTag*)nbt->getIntTag(key), true); // share ptr
                break;
            case Tag::Type::Int64:
                res = NbtLongClass::pack((Int64Tag*)nbt->getInt64Tag(key), true); // share ptr
                break;
            case Tag::Type::Float:
                res = NbtFloatClass::pack((FloatTag*)nbt->getFloatTag(key), true); // share ptr
                break;
            case Tag::Type::Double:
                res = NbtDoubleClass::pack((DoubleTag*)nbt->getDoubleTag(key), true); // share ptr
                break;
            case Tag::Type::String:
                res = NbtStringClass::pack((StringTag*)nbt->getStringTag(key), true); // share ptr
                break;
            case Tag::Type::ByteArray:
                res = NbtByteArrayClass::pack((ByteArrayTag*)nbt->getByteArrayTag(key), true); // share ptr
                break;
            case Tag::Type::List:
                res = NbtListClass::pack((ListTag*)nbt->getListTag(key), true); // share ptr
                break;
            case Tag::Type::Compound:
                res = NbtCompoundClass::pack((CompoundTag*)nbt->getCompoundTag(key), true); // share ptr
                break;
            default:
                res = Local<Value>();
                break;
        }
        return res;
    } catch (const out_of_range& e) {
        return Local<Value>();
    }
    CATCH("Fail in NBT GetTag!");
}

Local<Value> NbtCompoundClass::toObject(const Arguments& args) {
    try {
        auto& comp = nbt->value();
        Local<Object> obj = Object::newObject();

        for (auto& [k, v] : comp) {
            obj.set(k, Tag2Value(v.asTag(), true));
        }
        return obj;
    }
    CATCH("Fail in NBT ToObject!");
}

Local<Value> NbtCompoundClass::toSNBT(const Arguments& args) {
    try {
        int indent = args.size() >= 1 ? args[0].toInt() : -1;
        if (indent == -1)
            return String::newString(nbt->toSNBT(0, SnbtFormat::Minimize));
        else
            return String::newString(nbt->toSNBT(indent, SnbtFormat::PartialNewLine));
    }
    CATCH("Fail in toSNBT!");
}

Local<Value> NbtCompoundClass::toBinaryNBT(const Arguments& args) {
    try {
        auto res = nbt->toBinaryNBT();
        return ByteBuffer::newByteBuffer(res.data(), res.size());
    }
    CATCH("Fail in toBinaryNBT!");
}

Local<Value> NbtCompoundClass::toString(const Arguments& args) {
    if (args.size() >= 1)
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        return String::newString(nbt->toJson(args.size() >= 1 ? args[0].toInt() : -1));
    }
    CATCH("Fail in NBTtoJson!");
}

Local<Value> NbtCompoundClass::destroy(const Arguments& args) {
    return Boolean::newBoolean(true);
}

//////////////////// APIs ////////////////////

Local<Value> NbtStatic::newTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        auto type = enum_cast<Tag::Type>(args[0].toInt()).value();

        Local<Value> res;
        switch (type) {
            case Tag::Type::End: {
                auto tag = EndTag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set();
                }
                res = NbtEndClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Byte: {
                auto tag = ByteTag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set(args[1].toInt());
                }
                res = NbtByteClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Short: {
                auto tag = ShortTag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set(args[1].toInt());
                }
                res = NbtShortClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Int: {
                auto tag = IntTag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set(args[1].toInt());
                }
                res = NbtIntClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Int64: {
                auto tag = Int64Tag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set(args[1].asNumber().toInt64());
                }
                res = NbtLongClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Float: {
                auto tag = FloatTag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set(args[1].asNumber().toFloat());
                }
                res = NbtFloatClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Double: {
                auto tag = DoubleTag::create();
                if (args.size() >= 2 && args[1].isNumber()) {
                    tag->set(args[1].asNumber().toDouble());
                }
                res = NbtDoubleClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::String: {
                auto tag = StringTag::create();
                if (args.size() >= 2 && args[1].isString()) {
                    tag->set(args[1].toStr());
                }
                res = NbtStringClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::ByteArray: {
                auto tag = ByteArrayTag::create();
                if (args.size() >= 2 && args[1].isByteBuffer()) {
                    Local<ByteBuffer> buf = args[1].asByteBuffer();
                    tag->set(TagMemoryChunk((char*)buf.getRawBytes(), buf.byteLength()));
                }
                res = NbtByteArrayClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::List: {
                auto tag = ListTag::create();
                if (args.size() >= 2 && args[1].isArray()) {
                    Local<Array> arr = args[1].asArray();
                    NbtListClassAddHelper(tag.get(), arr);
                }
                res = NbtListClass::pack(std::move(tag));
                break;
            }
            case Tag::Type::Compound: {
                auto tag = CompoundTag::create();
                if (args.size() >= 2 && args[1].isObject()) {
                    Local<Object> obj = args[1].asObject();
                    NbtCompoundClassAddHelper(tag.get(), obj);
                }
                res = NbtCompoundClass::pack(std::move(tag));
                break;
            }
            default:
                res = Local<Value>();
                break;
        }
        return res;
    }
    CATCH("Fail in NBT CreateTag!");
}

Local<Value> NbtStatic::parseSNBT(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        auto tag = CompoundTag::fromSNBT(args[0].toStr());
        if (tag)
            return NbtCompoundClass::pack(std::move(tag));
        else
            return Local<Value>();
    }
    CATCH("Fail in parseSNBT!");
}

Local<Value> NbtStatic::parseBinaryNBT(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kByteBuffer);

    try {
        auto data = args[0].asByteBuffer();
        auto tag = CompoundTag::fromBinaryNBT(data.getRawBytes(), data.byteLength());
        if (tag)
            return NbtCompoundClass::pack(std::move(tag));
        else
            return Local<Value>();
    }
    CATCH("Fail in parseBinaryNBT!");
}


//////////////////// Helper ////////////////////

bool IsNbtClass(Local<Value> value) {
    return IsInstanceOf<NbtEndClass>(value) || IsInstanceOf<NbtByteClass>(value) || IsInstanceOf<NbtShortClass>(value) || IsInstanceOf<NbtIntClass>(value) || IsInstanceOf<NbtLongClass>(value) || IsInstanceOf<NbtFloatClass>(value) || IsInstanceOf<NbtDoubleClass>(value) || IsInstanceOf<NbtStringClass>(value) || IsInstanceOf<NbtByteArrayClass>(value) || IsInstanceOf<NbtListClass>(value) || IsInstanceOf<NbtCompoundClass>(value);
}


//////////////////// Tag To Value ////////////////////

Local<Value> Tag2Value_CompoundHelper(CompoundTag* nbt, bool autoExpansion = false);

Local<Value> Tag2Value_ListHelper(ListTag* nbt, bool autoExpansion = false) {
    Local<Array> res = Array::newArray();

    auto& list = nbt->asListTag()->value();
    for (auto& tag : list) {
        switch (tag->getTagType()) {
            case Tag::Type::End:
                res.add(Local<Value>());
                break;
            case Tag::Type::Byte:
                res.add(Number::newNumber(tag->asByteTag()->value()));
                break;
            case Tag::Type::Short:
                res.add(Number::newNumber(tag->asShortTag()->value()));
                break;
            case Tag::Type::Int:
                res.add(Number::newNumber(tag->asIntTag()->value()));
                break;
            case Tag::Type::Int64:
                res.add(Number::newNumber(tag->asInt64Tag()->value()));
                break;
            case Tag::Type::Float:
                res.add(Number::newNumber(tag->asFloatTag()->value()));
                break;
            case Tag::Type::Double:
                res.add(Number::newNumber(tag->asDoubleTag()->value()));
                break;
            case Tag::Type::String:
                res.add(String::newString(tag->asStringTag()->value()));
                break;
            case Tag::Type::ByteArray: {
                auto& data = tag->asByteArrayTag()->value();
                res.add(ByteBuffer::newByteBuffer(data.data.get(), data.size));
                break;
            }
            case Tag::Type::List:
                if (!autoExpansion)
                    res.add(NbtListClass::pack(tag->asListTag()));
                else
                    res.add(Tag2Value_ListHelper(tag->asListTag(), autoExpansion));
                break;
            case Tag::Type::Compound:
                if (!autoExpansion)
                    res.add(NbtCompoundClass::pack(tag->asCompoundTag()));
                else
                    res.add(Tag2Value_CompoundHelper(tag->asCompoundTag(), autoExpansion));
            default:
                res.add(Local<Value>());
                break;
        }
    }
    return res;
}

Local<Value> Tag2Value_CompoundHelper(CompoundTag* nbt, bool autoExpansion) {
    Local<Object> res = Object::newObject();

    auto& list = nbt->asCompoundTag()->value();
    for (auto& [key, tag] : list) {
        switch (tag.getTagType()) {
            case Tag::Type::End:
                res.set(key, Local<Value>());
                break;
            case Tag::Type::Byte:
                res.set(key, Number::newNumber(tag.asByteTag()->get()));
                break;
            case Tag::Type::Short:
                res.set(key, Number::newNumber(tag.asShortTag()->get()));
                break;
            case Tag::Type::Int:
                res.set(key, Number::newNumber(tag.asIntTag()->get()));
                break;
            case Tag::Type::Int64:
                res.set(key, Number::newNumber(tag.asInt64Tag()->get()));
                break;
            case Tag::Type::Float:
                res.set(key, Number::newNumber(tag.asFloatTag()->get()));
                break;
            case Tag::Type::Double:
                res.set(key, Number::newNumber(tag.asDoubleTag()->get()));
                break;
            case Tag::Type::String:
                res.set(key, String::newString(tag.asStringTag()->get()));
                break;
            case Tag::Type::ByteArray: {
                auto& data = tag.asByteArrayTag()->value();
                res.set(key, ByteBuffer::newByteBuffer(data.data.get(), data.size));
                break;
            }
            case Tag::Type::List:
                if (!autoExpansion)
                    res.set(key, NbtListClass::pack(tag.asListTag()));
                else
                    res.set(key, Tag2Value_ListHelper(tag.asListTag(), autoExpansion));
                break;
            case Tag::Type::Compound:
                if (!autoExpansion)
                    res.set(key, NbtCompoundClass::pack(tag.asCompoundTag()));
                else
                    res.set(key, Tag2Value_CompoundHelper(tag.asCompoundTag(), autoExpansion));
            default:
                res.set(key, Local<Value>());
                break;
        }
    }
    return res;
}

Local<Value> Tag2Value(Tag* nbt, bool autoExpansion) {
    Local<Value> value;

    switch (nbt->getTagType()) {
        case Tag::Type::End:
            value = Number::newNumber(0);
            break;
        case Tag::Type::Byte:
            value = Number::newNumber(nbt->asByteTag()->get());
            break;
        case Tag::Type::Short:
            value = Number::newNumber(nbt->asShortTag()->get());
            break;
        case Tag::Type::Int:
            value = Number::newNumber(nbt->asIntTag()->get());
            break;
        case Tag::Type::Int64:
            value = Number::newNumber(nbt->asInt64Tag()->get());
            break;
        case Tag::Type::Float:
            value = Number::newNumber(nbt->asFloatTag()->get());
            break;
        case Tag::Type::Double:
            value = Number::newNumber(nbt->asDoubleTag()->get());
            break;
        case Tag::Type::String:
            value = String::newString(nbt->asStringTag()->get());
            break;
        case Tag::Type::ByteArray: {
            auto& data = nbt->asByteArrayTag()->value();
            value = ByteBuffer::newByteBuffer(data.data.get(), data.size);
            break;
        }
        case Tag::Type::List:
            if (!autoExpansion)
                value = NbtListClass::pack(nbt->asListTag());
            else
                value = Tag2Value_ListHelper(nbt->asListTag(), autoExpansion);
            break;
        case Tag::Type::Compound:
            if (!autoExpansion)
                value = NbtCompoundClass::pack(nbt->asCompoundTag());
            else
                value = Tag2Value_CompoundHelper(nbt->asCompoundTag(), autoExpansion);
            break;
        default:
            value = Local<Value>();
            break;
    }
    return value;
}