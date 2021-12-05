#include "Global.h"
#include <MC/Tag.hpp>
#include <MC/ByteTag.hpp>
#include <MC/ShortTag.hpp>
#include <MC/IntTag.hpp>
#include <MC/Int64Tag.hpp>
#include <MC/FloatTag.hpp>
#include <MC/DoubleTag.hpp>
#include <MC/ByteArrayTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/ListTag.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/IntArrayTag.hpp>
#include <map>
#include <sstream>
#include <vector>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/BlockActor.hpp>
#include <nbt-cpp/nbt.hpp>
#include <cpp-base64/base64.h>
using namespace std;

//////////////////// NBT Class ////////////////////

ByteTag* Tag::asByteTag() {
    if (this && getTagType() ==Tag::Type::Byte)
        return (ByteTag*)this;
    return nullptr;
}

ShortTag* Tag::asShortTag() {
    if (this && getTagType() ==Tag::Type::Short)
        return (ShortTag*)this;
    return nullptr;
}

IntTag* Tag::asIntTag() {
    if (this && getTagType() ==Tag::Type::Int)
        return (IntTag*)this;
    return nullptr;
}

Int64Tag* Tag::asInt64Tag() {
    if (this && getTagType() ==Tag::Type::Int64)
        return (Int64Tag*)this;
    return nullptr;
}

FloatTag* Tag::asFloatTag() {
    if (this && getTagType() ==Tag::Type::Float)
        return (FloatTag*)this;
    return nullptr;
}

DoubleTag* Tag::asDoubleTag() {
    if (this && getTagType() ==Tag::Type::Double)
        return (DoubleTag*)this;
    return nullptr;
}

StringTag* Tag::asStringTag() {
    if (this && getTagType() ==Tag::Type::String)
        return (StringTag*)this;
    return nullptr;
}

ListTag* Tag::asListTag() {
    if (this && getTagType() ==Tag::Type::List)
        return (ListTag*)this;
    return nullptr;
}

CompoundTag* Tag::asCompoundTag() {
    if (this && getTagType() ==Tag::Type::Compound)
        return (CompoundTag*)this;
    return nullptr;
}

ByteArrayTag* Tag::asByteArrayTag() {
    if (this && getTagType() ==Tag::Type::ByteArray)
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
    return VirtualCall<Tag::Type>((void*)this, 5 * 8);
}

void Tag::destroy() {
    try {
        SymCall("??1CompoundTag@@UEAA@XZ", void, Tag*)(this);
    } catch (...) {
        ;
    }
}


Tag* Tag::fromItem(ItemStack* item) {
    Tag* tmp = 0;
    SymCall("?save@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ",
            void*, void*, Tag**)(item, &tmp);

    return tmp;
}

void Tag::setItem(ItemStack* item) {
    SymCall("?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@@Z",
            void*, void*, Tag*)(item, this);
}

Tag* Tag::fromBlock(Block* blk) {
    auto tag = (Tag*)((uintptr_t)blk + 96);
    Tag* newTag;
    SymCall("?clone@CompoundTag@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ",
            Tag**, Tag*, Tag**)(tag, &newTag);
    return newTag;
}

void Tag::setBlock(Block* blk) {
    //SymCall("??0CompoundTag@@QEAA@$$QEAV0@@Z", Tag*, Tag*, Tag*)((Tag*)((uintptr_t)blk + 96), this);
    *(CompoundTag**)((uintptr_t)blk + 96) = *(CompoundTag**)this;
}

Tag* Tag::fromActor(Actor* actor) {
    Tag* tmp = Tag::createTag(Tag::Type::Compound);
    SymCall("?save@Actor@@UEAA_NAEAVCompoundTag@@@Z",
            void, Actor*, Tag*)(actor, tmp);
    SymCall("?saveWithoutId@Actor@@UEAAXAEAVCompoundTag@@@Z",
            void, Actor*, Tag*)(actor, tmp);
    VirtualCall(actor, 0x810, tmp); //IDA Virtual Table from Actor::addAdditionalSaveData

    return tmp;
}

bool Tag::setActor(Actor* actor) {
    void* vtbl = dlsym("??_7DefaultDataLoadHelper@@6B@");
    bool res = SymCall("?load@Actor@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z",
                       bool, Actor*, Tag*, void*)(actor, this, &vtbl);
    VirtualCall(actor, 0x808, this, &vtbl); //IDA Virtual Table from Actor::readAdditionalSaveData
    actor->_sendDirtyActorData();
    return res;
}
class DataLoadHelper;
bool Tag::setPlayer(Player* player) {
    void* vtbl = dlsym("??_7DefaultDataLoadHelper@@6B@");
    bool res = ((ServerPlayer*)player)->load(*(CompoundTag*)this, (DataLoadHelper&)vtbl);
    player->readAdditionalSaveData(*(CompoundTag*)this, (DataLoadHelper&)vtbl);
    player->_sendDirtyActorData();
    return res;
}

bool Tag::setBlockEntity(BlockActor* ble) {
    void* vtbl = dlsym("??_7DefaultDataLoadHelper@@6B@");
    VirtualCall(ble, 0x8, Global<Level>, this, &vtbl); //IDA Virtual Table from BlockActor::load
    ble->setChanged();
    return true;
}

Tag* Tag::fromBlockEntity(BlockActor* ble) {
    Tag* tmp = CompoundTag::create();
    VirtualCall(ble, 0x10, tmp); //IDA Virtual Table from BlockActor::save
    return tmp;
}


//////////////////// SNBT ////////////////////

using namespace nbt;

void TagToSNBT_Compound_Helper(tags::compound_tag& res, CompoundTag* nbt);
void TagToSNBT_List_Helper(tags::compound_list_tag& res, ListTag* nbt);

void TagToSNBT_List_Helper(tags::byte_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asByteTag()->value());
}

void TagToSNBT_List_Helper(tags::short_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asShortTag()->value());
}

void TagToSNBT_List_Helper(tags::int_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asIntTag()->value());
}

void TagToSNBT_List_Helper(tags::long_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asInt64Tag()->value());
}

void TagToSNBT_List_Helper(tags::float_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asFloatTag()->value());
}

void TagToSNBT_List_Helper(tags::double_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asDoubleTag()->value());
}

void TagToSNBT_List_Helper(tags::string_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asStringTag()->value());
}

void TagToSNBT_List_Helper(tags::bytearray_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        auto& bytes = tag->asByteArrayTag()->value();

        char* raw = (char*)bytes.data.get();
        vector<int8_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

tags::tag_list_tag TagToSNBT_List_Helper(ListTag* nbt) {
    auto& list = nbt->value();
    if (list.empty()) {
        return tags::tag_list_tag();
    }

    switch (list[0]->getTagType()) {
        case Tag::Type::Byte: {
            tags::byte_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Short: {
            tags::short_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Int: {
            tags::int_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            // this is error, so return.
            // res = std::move(data.as_tags());
            return data.as_tags();
        }
        case Tag::Type::Int64: {
            tags::long_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Float: {
            tags::float_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Double: {
            tags::double_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::String: {
            tags::string_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::ByteArray: {
            tags::bytearray_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::List: {
            tags::list_list_tag res;
            for (auto& tag : list) {
                tags::tag_list_tag data = TagToSNBT_List_Helper((ListTag*)tag);
                res.value.emplace_back(std::make_unique<tags::tag_list_tag>(data));
            }
            return res.as_tags();
        }
        case Tag::Type::Compound: {
            tags::compound_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        default: {
            return tags::end_list_tag().as_tags();
        }
    }
}

void TagToSNBT_List_Helper(tags::compound_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        auto obj = tags::compound_tag(false);
        TagToSNBT_Compound_Helper(obj, (CompoundTag*)tag);
        res.value.emplace_back(obj.value);
    }
}

void TagToSNBT_Compound_Helper(tags::compound_tag& res, CompoundTag* nbt) {
    auto& list = nbt->value();
    for (auto& [key, tmp] : list) {
        auto& tag = *tmp.get();
        switch (tag.getTagType()) {
            case Tag::Type::End:
                res.value[key].reset();
                break;
            case Tag::Type::Byte:
                res.value[key] = make_unique<tags::byte_tag>(tag.asByteTag()->value());
                break;
            case Tag::Type::Short:
                res.value[key] = make_unique<tags::short_tag>(tag.asShortTag()->value());
                break;
            case Tag::Type::Int:
                res.value[key] = make_unique<tags::int_tag>(tag.asIntTag()->value());
                break;
            case Tag::Type::Int64:
                res.value[key] = make_unique<tags::long_tag>(tag.asInt64Tag()->value());
                break;
            case Tag::Type::Float:
                res.value[key] = make_unique<tags::float_tag>(tag.asFloatTag()->value());
                break;
            case Tag::Type::Double:
                res.value[key] = make_unique<tags::double_tag>(tag.asDoubleTag()->value());
                break;
            case Tag::Type::String:
                res.value[key] = make_unique<tags::string_tag>(tag.asStringTag()->value());
                break;
            case Tag::Type::ByteArray: {
                auto& bytes = tag.asByteArrayTag()->value();
                char* raw = (char*)bytes.data.get();
                vector<int8_t> data;
                data.reserve(bytes.size);
                for (int i = 0; i < bytes.size; ++i)
                    data.emplace_back(raw[i]);

                res.value[key] = make_unique<tags::bytearray_tag>(data);
                break;
            }
            case Tag::Type::List: {
                auto& list = tag.asListTag()->value();
                if (list.empty()) {
                    res.value[key] = make_unique<tags::tag_list_tag>();
                    break;
                }
                tags::tag_list_tag obj = TagToSNBT_List_Helper((ListTag*) & tag);
                res.value[key] = make_unique<tags::tag_list_tag>(obj);
                break;
            }
            case Tag::Type::Compound: {
                auto obj = tags::compound_tag(false);
                TagToSNBT_Compound_Helper(obj, (CompoundTag*) & tag);
                res.value[key] = make_unique<tags::compound_tag>(obj);
                break;
            }
            default:
                res.value[key].reset();
                break;
        }
    }
}

string Tag::toSNBT() {
    auto nbt = this;
    if (nbt->getTagType() != Tag::Type::Compound)
        return "";
    tags::compound_tag root(true);
    TagToSNBT_Compound_Helper(root, (CompoundTag*)nbt);

    ostringstream sout;
    sout << contexts::mojangson << root;
    return sout.str();
}


//////////////////// From SNBT ////////////////////

void SNBTToTag_Compound_Helper(CompoundTag*& nbt, tags::compound_tag& data);
void SNBTToTag_List_Helper(ListTag*& nbt, tags::compound_list_tag& data);

void SNBTToTag_List_Helper(ListTag*& nbt, tags::end_list_tag& data) {
    nbt->addEnd();
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::byte_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addByte((unsigned char)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::short_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addShort((short)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::int_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addInt((int)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::long_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addInt64((long long)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::float_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addFloat((float)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::double_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addDouble((double)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::string_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addString((string)dat);
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::bytearray_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addByteArray(dat.data(), dat.size());
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::list_list_tag& data) {
    for (auto& dat : data.value) {
        ListTag* tagList = (ListTag*)Tag::createTag(Tag::Type::List);
        switch (dat->element_id()) {
            case tag_id::tag_end:
                SNBTToTag_List_Helper(tagList, *(tags::end_list_tag*)dat.get());
                break;
            case tag_id::tag_byte:
                SNBTToTag_List_Helper(tagList, *(tags::byte_list_tag*)dat.get());
                break;
            case tag_id::tag_short:
                SNBTToTag_List_Helper(tagList, *(tags::short_list_tag*)dat.get());
                break;
            case tag_id::tag_int:
                SNBTToTag_List_Helper(tagList, *(tags::int_list_tag*)dat.get());
                break;
            case tag_id::tag_long:
                SNBTToTag_List_Helper(tagList, *(tags::long_list_tag*)dat.get());
                break;
            case tag_id::tag_float:
                SNBTToTag_List_Helper(tagList, *(tags::float_list_tag*)dat.get());
                break;
            case tag_id::tag_double:
                SNBTToTag_List_Helper(tagList, *(tags::double_list_tag*)dat.get());
                break;
            case tag_id::tag_string:
                SNBTToTag_List_Helper(tagList, *(tags::string_list_tag*)dat.get());
                break;
            case tag_id::tag_bytearray:
                SNBTToTag_List_Helper(tagList, *(tags::bytearray_list_tag*)dat.get());
                break;
            case tag_id::tag_list:
                SNBTToTag_List_Helper(tagList, *(tags::list_list_tag*)dat.get());
                break;
            case tag_id::tag_compound:
                SNBTToTag_List_Helper(tagList, *(tags::compound_list_tag*)dat.get());
                break;
            default:
                break;
        }
        nbt->add(tagList);
    }
}

void SNBTToTag_List_Helper(ListTag*& nbt, tags::compound_list_tag& data) {
    for (auto& dat : data.value) {
        CompoundTag* tagComp = (CompoundTag*)Tag::createTag(Tag::Type::Compound);
        SNBTToTag_Compound_Helper(tagComp, dat);
        nbt->add(tagComp);
    }
}

void SNBTToTag_Compound_Helper(CompoundTag*& nbt, tags::compound_tag& data) {
    for (auto& [key, value] : data.value) {
        switch (value->id()) {
            case tag_id::tag_end:
                nbt->putEnd(key);
                break;
            case tag_id::tag_byte:
                nbt->putByte(key, ((tags::byte_tag*)value.get())->value);
                break;
            case tag_id::tag_short:
                nbt->putShort(key, ((tags::short_tag*)value.get())->value);
                break;
            case tag_id::tag_int:
                nbt->putInt(key, ((tags::int_tag*)value.get())->value);
                break;
            case tag_id::tag_long:
                nbt->putInt64(key, ((tags::long_tag*)value.get())->value);
                break;
            case tag_id::tag_float:
                nbt->putFloat(key, ((tags::float_tag*)value.get())->value);
                break;
            case tag_id::tag_double:
                nbt->putDouble(key, ((tags::double_tag*)value.get())->value);
                break;
            case tag_id::tag_string:
                nbt->putString(key, ((tags::string_tag*)value.get())->value);
                break;
            case tag_id::tag_bytearray: {
                auto& data = ((tags::bytearray_tag*)value.get())->value;
                nbt->putByteArray(key, data.data(), data.size());
                break;
            }
            case tag_id::tag_list: {
                ListTag* res = (ListTag*)Tag::createTag(Tag::Type::List);

                tags::list_tag* data = (tags::list_tag*)value.get();
                switch (data->element_id()) {
                    case tag_id::tag_byte:
                        SNBTToTag_List_Helper(res, *(tags::byte_list_tag*)data);
                        break;
                    case tag_id::tag_short:
                        SNBTToTag_List_Helper(res, *(tags::short_list_tag*)data);
                        break;
                    case tag_id::tag_int:
                        SNBTToTag_List_Helper(res, *(tags::int_list_tag*)data);
                        break;
                    case tag_id::tag_long:
                        SNBTToTag_List_Helper(res, *(tags::long_list_tag*)data);
                        break;
                    case tag_id::tag_float:
                        SNBTToTag_List_Helper(res, *(tags::float_list_tag*)data);
                        break;
                    case tag_id::tag_double:
                        SNBTToTag_List_Helper(res, *(tags::double_list_tag*)data);
                        break;
                    case tag_id::tag_string:
                        SNBTToTag_List_Helper(res, *(tags::string_list_tag*)data);
                        break;
                    case tag_id::tag_bytearray:
                        SNBTToTag_List_Helper(res, *(tags::bytearray_list_tag*)data);
                        break;
                    case tag_id::tag_list:
                        SNBTToTag_List_Helper(res, *(tags::list_list_tag*)data);
                        break;
                    case tag_id::tag_compound:
                        SNBTToTag_List_Helper(res, *(tags::compound_list_tag*)data);
                        break;
                    default:
                        break;
                }
                nbt->put(key, std::move(*res));
                break;
            }
            case tag_id::tag_compound: {
                CompoundTag* res = CompoundTag::create();
                tags::compound_tag* data = (tags::compound_tag*)value.get();
                SNBTToTag_Compound_Helper(res, *data);
                nbt->put(key, std::move(*(CompoundTag*)res));
                break;
            }
        }
    }
}

CompoundTag* Tag::fromSNBT(const string& snbt) {
    istringstream sin(snbt);
    tags::compound_tag root(true);
    sin >> contexts::mojangson >> root;

    CompoundTag* res = (CompoundTag*)Tag::createTag(Tag::Type::Compound);
    SNBTToTag_Compound_Helper(res, root);
    return res;
}


//////////////////// From Binary ////////////////////

CompoundTag* Tag::fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian) {
    void* vtbl;
    if (isLittleEndian)
        vtbl = dlsym("??_7StringByteInput@@6B@");
    else
        vtbl = dlsym("??_7BigEndianStringByteInput@@6B@");

    uintptr_t iDataInput[4] = {(uintptr_t)vtbl, offset, len, (uintptr_t)data};
    CompoundTag* tag = CompoundTag::create();
    auto rtn = SymCall("?read@NbtIo@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z",
                       unique_ptr<CompoundTag>*, CompoundTag**, void*)(&tag, (void*)iDataInput);

    offset = iDataInput[1];
    return rtn->release();
}

CompoundTag* Tag::fromBinaryNBT(void* data, size_t len, bool isLittleEndian) {
    size_t offset = 0;
    return fromBinaryNBT(data, len, offset, isLittleEndian);
}


//////////////////// To Binary ////////////////////

// Reference from StringByteOutput and BigEndianStringByteInput
class BigEndianStringByteOutput {
    void writeBigEndianBytes(byte* bytes, size_t count) {
        auto v5 = bytes + count - 1;
        if (v5 >= bytes) {
            auto v7 = bytes + 1;
            do {
                auto v8 = *(v7 - 1);
                *(v7 - 1) = *v5;
                *v5-- = v8;
            } while (v7++ <= v5);
        }
        writeBytes(bytes, count);
    }

public:
    virtual ~BigEndianStringByteOutput(){};
    virtual void* writeString(void* string_span) {
        return SymCall("?writeString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z",
                       void*, void*, void*)((void*)this, string_span);
    }
    virtual void* writeLongString(void* string_span) {
        return SymCall("?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z",
                       void*, void*, void*)((void*)this, string_span);
    }
    virtual void writeFloat(float data) {
        writeBigEndianBytes((byte*)&data, 4);
    }
    virtual void writeDouble(double data) {
        writeBigEndianBytes((byte*)&data, 8);
    }
    virtual void writeByte(byte data) {
        writeBytes(&data, 1);
    }
    virtual void writeShort(short data) {
        writeBigEndianBytes((byte*)&data, 2);
    }
    virtual void writeInt(int data) {
        writeBigEndianBytes((byte*)&data, 4);
    }
    virtual void writeLongLong(long long data) {
        writeBigEndianBytes((byte*)&data, 8);
    }
    virtual void* writeBytes(byte* bytes, size_t count) {
        return SymCall("?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z",
                       void*, void*, byte*, size_t)((void*)this, bytes, count);
    }
};

string Tag::toBinaryNBT(bool isLittleEndian) {
    void* vtbl;
    auto tag = this;
    if (isLittleEndian) {
        vtbl = dlsym("??_7StringByteOutput@@6B@");
    } else {
        auto tmp = BigEndianStringByteOutput();
        vtbl = *(void**)&tmp;
    }
    string result = "";
    void* iDataOutput[2] = {vtbl, &result};

    SymCall("?write@NbtIo@@SAXPEBVCompoundTag@@AEAVIDataOutput@@@Z",
            void*, Tag*, void*)(tag, (void*)iDataOutput);
    return result;
}


//////////////////// To Json ////////////////////

void TagToJson_Compound_Helper(JSON_VALUE& res, CompoundTag* nbt);

void TagToJson_List_Helper(JSON_VALUE& res, ListTag* nbt) {
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
                JSON_VALUE arrJson = JSON_VALUE::array();
                TagToJson_List_Helper(arrJson, (ListTag*)tag);
                res.push_back(arrJson);
                break;
            }
            case Tag::Type::Compound: {
                JSON_VALUE arrObj = JSON_VALUE::object();
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

void TagToJson_Compound_Helper(JSON_VALUE& res, CompoundTag* nbt) {
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
                JSON_VALUE arrJson = JSON_VALUE::array();
                TagToJson_List_Helper(arrJson, (ListTag*) & tag);
                res.push_back({key, arrJson});
                break;
            }
            case Tag::Type::Compound: {
                JSON_VALUE arrObj = JSON_VALUE::object();
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
            JSON_VALUE jsonRes = JSON_VALUE::array();
            TagToJson_List_Helper(jsonRes, (ListTag*)nbt);
            result = jsonRes.dump(formatIndent);
            break;
        }
        case Tag::Type::Compound: {
            JSON_VALUE jsonRes = JSON_VALUE::object();
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
