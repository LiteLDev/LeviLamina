#include "llapi/Global.h"
#include "llapi/mc/ByteArrayTag.hpp"
#include "llapi/mc/ByteTag.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/DoubleTag.hpp"
#include "llapi/mc/FloatTag.hpp"
#include "llapi/mc/Int64Tag.hpp"
#include "llapi/mc/IntArrayTag.hpp"
#include "llapi/mc/IntTag.hpp"
#include "llapi/mc/ListTag.hpp"
#include "llapi/mc/ShortTag.hpp"
#include "llapi/mc/StringTag.hpp"
#include "llapi/mc/Tag.hpp"
#include "llapi/utils/Base64.hpp"

using namespace std;

EndTag* Tag::asEndTag() {
    if (this && getTagType() == Tag::Type::End)
        return (EndTag*)this;
    return nullptr;
}

ByteTag* Tag::asByteTag() {
    if (this && getTagType() == Tag::Type::Byte)
        return (ByteTag*)this;
    return nullptr;
}

ShortTag* Tag::asShortTag() {
    if (this && getTagType() == Tag::Type::Short)
        return (ShortTag*)this;
    return nullptr;
}

IntTag* Tag::asIntTag() {
    if (this && getTagType() == Tag::Type::Int)
        return (IntTag*)this;
    return nullptr;
}

Int64Tag* Tag::asInt64Tag() {
    if (this && getTagType() == Tag::Type::Int64)
        return (Int64Tag*)this;
    return nullptr;
}

FloatTag* Tag::asFloatTag() {
    if (this && getTagType() == Tag::Type::Float)
        return (FloatTag*)this;
    return nullptr;
}

DoubleTag* Tag::asDoubleTag() {
    if (this && getTagType() == Tag::Type::Double)
        return (DoubleTag*)this;
    return nullptr;
}

StringTag* Tag::asStringTag() {
    if (this && getTagType() == Tag::Type::String)
        return (StringTag*)this;
    return nullptr;
}

ListTag* Tag::asListTag() {
    if (this && getTagType() == Tag::Type::List)
        return (ListTag*)this;
    return nullptr;
}

CompoundTag* Tag::asCompoundTag() {
    if (this && getTagType() == Tag::Type::Compound)
        return (CompoundTag*)this;
    return nullptr;
}

ByteArrayTag* Tag::asByteArrayTag() {
    if (this && getTagType() == Tag::Type::ByteArray)
        return (ByteArrayTag*)this;
    return nullptr;
}

IntArrayTag* Tag::asIntArrayTag() {
    if (this && getTagType() == Tag::Type::IntArray)
        return (IntArrayTag*)this;
    return nullptr;
}

Tag::Type Tag::getTagType() const { return (Tag::Type)getId(); }

void Tag::destroy() {
    try {
        this->~Tag();
    } catch (...) {
        ;
    }
}

//////////////////// To Json ////////////////////

void TagToJson_Compound_Helper(fifo_json& res, CompoundTag* nbt);

void TagToJson_List_Helper(fifo_json& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        switch (tag->getTagType()) {
        case Tag::Type::End:
            res.push_back(nullptr);
            break;
        case Tag::Type::Byte:
            *tag->asByteTag() = 4;
            res.push_back(tag->asByteTag()->value());
            break;
        case Tag::Type::Short:
            res.push_back(tag->asShortTag()->value());
            break;
        case Tag::Type::Int:
            res.push_back(tag->asIntTag()->value());
            break;
        case Tag::Type::Int64:
            res.push_back(tag->asInt64Tag()->value());
            break;
        case Tag::Type::Float:
            res.push_back(tag->asFloatTag()->value());
            break;
        case Tag::Type::Double:
            res.push_back(tag->asDoubleTag()->value());
            break;
        case Tag::Type::String:
            res.push_back(tag->asStringTag()->value());
            break;
        case Tag::Type::ByteArray: {
            auto& bytes = tag->asByteArrayTag()->value();
            res.push_back(Base64::Encode(string((char*)bytes.data.get(), bytes.size)));
            break;
        }
        case Tag::Type::List: {
            fifo_json arrJson = fifo_json::array();
            TagToJson_List_Helper(arrJson, (ListTag*)tag);
            res.push_back(arrJson);
            break;
        }
        case Tag::Type::Compound: {
            fifo_json arrObj = fifo_json::object();
            TagToJson_Compound_Helper(arrObj, (CompoundTag*)tag);
            res.push_back(arrObj);
            break;
        }
        default:
            res.push_back(nullptr);
            break;
        }
    }
}

void TagToJson_Compound_Helper(fifo_json& res, CompoundTag* nbt) {
    auto& list = nbt->value();
    for (auto& [key, tmp] : list) {
        auto& tag = *tmp.get();
        switch (tag.getTagType()) {
        case Tag::Type::End:
            res.push_back({key, nullptr});
            break;
        case Tag::Type::Byte:
            res.push_back({key, tag.asByteTag()->value()});
            break;
        case Tag::Type::Short:
            res.push_back({key, tag.asShortTag()->value()});
            break;
        case Tag::Type::Int:
            res.push_back({key, tag.asIntTag()->value()});
            break;
        case Tag::Type::Int64:
            res.push_back({key, tag.asInt64Tag()->value()});
            break;
        case Tag::Type::Float:
            res.push_back({key, tag.asFloatTag()->value()});
            break;
        case Tag::Type::Double:
            res.push_back({key, tag.asDoubleTag()->value()});
            break;
        case Tag::Type::String:
            res.push_back({key, tag.asStringTag()->value()});
            break;
        case Tag::Type::ByteArray: {
            auto& bytes = tag.asByteArrayTag()->value();
            res.push_back({key, Base64::Encode(string((char*)bytes.data.get(), bytes.size))});
            break;
        }
        case Tag::Type::List: {
            fifo_json arrJson = fifo_json::array();
            TagToJson_List_Helper(arrJson, (ListTag*)&tag);
            res.push_back({key, arrJson});
            break;
        }
        case Tag::Type::Compound: {
            fifo_json arrObj = fifo_json::object();
            TagToJson_Compound_Helper(arrObj, (CompoundTag*)&tag);
            res.push_back({key, arrObj});
            break;
        }
        default:
            res.push_back({key, nullptr});
            break;
        }
    }
}

string Tag::toJson(int formatIndent) {
    string result;
    auto   nbt = this;
    switch (nbt->getTagType()) {
    case Tag::Type::End:
        result = "";
        break;
    case Tag::Type::Byte:
        result = to_string(nbt->asByteTag()->value());
        break;
    case Tag::Type::Short:
        result = to_string(nbt->asShortTag()->value());
        break;
    case Tag::Type::Int:
        result = to_string(nbt->asIntTag()->value());
        break;
    case Tag::Type::Int64:
        result = to_string(nbt->asInt64Tag()->value());
        break;
    case Tag::Type::Float:
        result = to_string(nbt->asFloatTag()->value());
        break;
    case Tag::Type::Double:
        result = to_string(nbt->asDoubleTag()->value());
        break;
    case Tag::Type::String:
        result = nbt->asStringTag()->value();
        break;
    case Tag::Type::ByteArray: {
        auto& bytes = nbt->asByteArrayTag()->value();
        result      = Base64::Encode(string((char*)bytes.data.get(), bytes.size));
        break;
    }
    case Tag::Type::List: {
        fifo_json jsonRes = fifo_json::array();
        TagToJson_List_Helper(jsonRes, (ListTag*)nbt);
        result = jsonRes.dump(formatIndent);
        break;
    }
    case Tag::Type::Compound: {
        fifo_json jsonRes = fifo_json::object();
        TagToJson_Compound_Helper(jsonRes, (CompoundTag*)nbt);
        result = jsonRes.dump(formatIndent);
        break;
    }
    default:
        result = "";
        break;
    }
    return result;
}
