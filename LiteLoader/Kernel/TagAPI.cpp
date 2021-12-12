#include "Global.h"
#include <MC/ByteArrayTag.hpp>
#include <MC/ByteTag.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/DoubleTag.hpp>
#include <MC/FloatTag.hpp>
#include <MC/Int64Tag.hpp>
#include <MC/IntArrayTag.hpp>
#include <MC/IntTag.hpp>
#include <MC/ListTag.hpp>
#include <MC/ShortTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/Tag.hpp>
#include <cpp-base64/base64.h>
#include <map>
#include <sstream>
#include <vector>
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

Tag* Tag::createTag(Tag::Type t) {
    Tag* tag = 0;
    SymCall("?newTag@Tag@@SA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@W4Type@1@@Z",
            void, Tag**, Tag::Type)(&tag, t);
    return tag;
}

Tag::Type Tag::getTagType() const {
    return (Tag::Type)getId();
}

void Tag::destroy() {
    try {
        SymCall("??1CompoundTag@@UEAA@XZ", void, Tag*)(this);
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
                res.push_back(base64_encode(string((char*)bytes.data.get(), bytes.size)));
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
                res.push_back({key, base64_encode(string((char*)bytes.data.get(), bytes.size))});
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
    auto nbt = this;
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
            result = base64_encode(string((char*)bytes.data.get(), bytes.size));
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
