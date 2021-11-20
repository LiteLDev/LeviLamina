#include "Global.h"
#include "NBTAPI.h"
#include <map>
#include <sstream>
#include <vector>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/BlockActor.hpp>
#include <nbt-cpp/nbt.hpp>
#include <cpp-base64/base64.h>
using namespace std;

//////////////////// NBT Class ////////////////////

char& Tag::asByte() {
    return *(char*)((uintptr_t)this + 8);
}

short& Tag::asShort() {
    return *(short*)((uintptr_t)this + 8);
}

int& Tag::asInt() {
    return *(int*)((uintptr_t)this + 8);
}

__int64& Tag::asLong() {
    return *(__int64*)((uintptr_t)this + 8);
}

float& Tag::asFloat() {
    return *(float*)((uintptr_t)this + 8);
}

double& Tag::asDouble() {
    return *(double*)((uintptr_t)this + 8);
}

std::string& Tag::asString() {
    return *(string*)((uintptr_t)this + 8);
}

vector<Tag*>& Tag::asList() {
    return *(vector<Tag*>*)((uintptr_t)this + 8);
}

map<string, Tag>& Tag::asCompound() {
    return *(map<string, Tag>*)((uintptr_t)this + 8);
}

TagMemoryChunk& Tag::asByteArray() {
    return *(TagMemoryChunk*)((uintptr_t)this + 8);
}

Tag* Tag::createTag(Tag::Type t) {
    Tag* tag = 0;
    SymCall("?newTag@Tag@@SA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@W4Type@1@@Z",
            void, Tag**, Tag::Type)(&tag, t);
    return tag;
}

char Tag::getTagType() {
    __try {
        return VirtualCall<char>(this, 40, this); //IDA Tag::print
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return -1;
    }
}

void Tag::put(const std::string& k, Tag* v) {
    return SymCall("?put@CompoundTag@@QEAAAEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV2@@Z", void, void*, string, Tag*)(this, k, v);
}

void Tag::putEnd(const std::string& k) {
    put(k, Tag::createTag(Tag::Type::End));
}

void Tag::putShort(const std::string& k, short v) {
    return SymCall("?putShort@CompoundTag@@QEAAAEAFV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z", void, void*, string, short)(this, k, v);
}

void Tag::putString(const std::string& k, string v) {
    return SymCall("?putString@CompoundTag@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@0@Z", void, void*, string, string)(this, k, v);
}

void Tag::putInt(const std::string& k, int v) {
    return SymCall("?putInt@CompoundTag@@QEAAAEAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z", void, void*, string, int)(this, k, v);
}

void Tag::putLong(const std::string& k, __int64 v) {
    return SymCall("?putInt64@CompoundTag@@QEAAAEA_JV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z",
                   void, void*, string, __int64)(this, k, v);
}

void Tag::putFloat(const std::string& k, float v) {
    return SymCall("?putFloat@CompoundTag@@QEAAAEAMV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z", void, void*, string, float)(this, k, v);
}

void Tag::putDouble(const std::string& k, double v) {
    Tag* tag = Tag::createTag(Tag::Type::Double);
    tag->asDouble() = v;
    put(k, tag);
}

void Tag::putCompound(const std::string& k, Tag* v) {
    return SymCall("?putCompound@CompoundTag@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V1@@Z",
                   void, void*, string, Tag*)(this, k, v);
}

void Tag::putByte(const std::string& k, char v) {
    return SymCall("?putByte@CompoundTag@@QEAAAEAEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z", void, void*, string, char)(this, k, v);
}

void Tag::putByteArray(const string& key, const TagMemoryChunk& value) {
    return SymCall("?putByteArray@CompoundTag@@QEAAAEAUTagMemoryChunk@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U2@@Z",
                   void, void*, string, const TagMemoryChunk&)(this, key, value);
}

void Tag::putByteArray(const std::string& key, void* data, size_t size) {
    uint8_t* written = new uint8_t[size];
    memcpy(written, data, size);
    TagMemoryChunk tmc(size, written);

    putByteArray(key, tmc);
}

void Tag::destroy() {
    try {
        SymCall("??1CompoundTag@@UEAA@XZ", void, Tag*)(this);
    } catch (...) {
        ;
    }
}

void Tag::add(Tag* t) {
    SymCall("?add@ListTag@@QEAAXV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z",
            void, void*, Tag**)(this, &t);
}

void Tag::addEnd() {
    Tag* t = Tag::createTag(Tag::Type::End);
    add(t);
}

void Tag::addByte(char v) {
    Tag* t = Tag::createTag(Tag::Type::Byte);
    t->asByte() = v;
    add(t);
}

void Tag::addShort(short v) {
    Tag* t = Tag::createTag(Tag::Type::Short);
    t->asShort() = v;
    add(t);
}

void Tag::addInt(int v) {
    Tag* t = Tag::createTag(Tag::Type::Int);
    t->asInt() = v;
    add(t);
}

void Tag::addLong(__int64 v) {
    Tag* t = Tag::createTag(Tag::Type::Long);
    t->asLong() = v;
    add(t);
}

void Tag::addFloat(float v) {
    Tag* t = Tag::createTag(Tag::Type::Float);
    t->asFloat() = v;
    add(t);
}

void Tag::addDouble(double v) {
    Tag* t = Tag::createTag(Tag::Type::Double);
    t->asDouble() = v;
    add(t);
}

void Tag::addString(const string& v) {
    Tag* t = Tag::createTag(Tag::Type::String);
    t->asString() = v;
    add(t);
}

void Tag::addByteArray(void* data, size_t size) {
    Tag* t = Tag::createTag(Tag::Type::ByteArray);

    uint8_t* written = new uint8_t[size];
    memcpy(written, data, size);
    t->asByteArray() = TagMemoryChunk(size, written);

    add(t);
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
    *(Tag*)((uintptr_t)blk + 96) = *this;
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
    VirtualCall(ble, 0x8, Global<Level>(), this, &vtbl); //IDA Virtual Table from BlockActor::load
    ble->setChanged();
    return true;
}

Tag* Tag::fromBlockEntity(BlockActor* ble) {
    Tag* tmp = Tag::createTag(Tag::Type::Compound);
    VirtualCall(ble, 0x10, tmp); //IDA Virtual Table from BlockActor::save
    return tmp;
}


//////////////////// SNBT ////////////////////

using namespace nbt;

void TagToSNBT_Compound_Helper(tags::compound_tag& res, Tag* nbt);
void TagToSNBT_List_Helper(tags::compound_list_tag& res, Tag* nbt);

void TagToSNBT_List_Helper(tags::byte_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asByte());
}

void TagToSNBT_List_Helper(tags::short_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asShort());
}

void TagToSNBT_List_Helper(tags::int_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asInt());
}

void TagToSNBT_List_Helper(tags::long_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asLong());
}

void TagToSNBT_List_Helper(tags::float_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asFloat());
}

void TagToSNBT_List_Helper(tags::double_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asDouble());
}

void TagToSNBT_List_Helper(tags::string_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list)
        res.value.emplace_back(tag->asString());
}

void TagToSNBT_List_Helper(tags::bytearray_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list) {
        auto& bytes = tag->asByteArray();

        char* raw = (char*)bytes.data.get();
        vector<int8_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

tags::tag_list_tag TagToSNBT_List_Helper(Tag* nbt) {
    auto& list = nbt->asList();
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
        case Tag::Type::Long: {
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
                tags::tag_list_tag data = TagToSNBT_List_Helper(tag);
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

void TagToSNBT_List_Helper(tags::compound_list_tag& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list) {
        auto obj = tags::compound_tag(false);
        TagToSNBT_Compound_Helper(obj, tag);
        res.value.emplace_back(obj.value);
    }
}

void TagToSNBT_Compound_Helper(tags::compound_tag& res, Tag* nbt) {
    auto& list = nbt->asCompound();
    for (auto& [key, tag] : list) {
        switch (tag.getTagType()) {
            case Tag::Type::End:
                res.value[key].reset();
                break;
            case Tag::Type::Byte:
                res.value[key] = make_unique<tags::byte_tag>(tag.asByte());
                break;
            case Tag::Type::Short:
                res.value[key] = make_unique<tags::short_tag>(tag.asShort());
                break;
            case Tag::Type::Int:
                res.value[key] = make_unique<tags::int_tag>(tag.asInt());
                break;
            case Tag::Type::Long:
                res.value[key] = make_unique<tags::long_tag>(tag.asLong());
                break;
            case Tag::Type::Float:
                res.value[key] = make_unique<tags::float_tag>(tag.asFloat());
                break;
            case Tag::Type::Double:
                res.value[key] = make_unique<tags::double_tag>(tag.asDouble());
                break;
            case Tag::Type::String:
                res.value[key] = make_unique<tags::string_tag>(tag.asString());
                break;
            case Tag::Type::ByteArray: {
                auto& bytes = tag.asByteArray();
                char* raw = (char*)bytes.data.get();
                vector<int8_t> data;
                data.reserve(bytes.size);
                for (int i = 0; i < bytes.size; ++i)
                    data.emplace_back(raw[i]);

                res.value[key] = make_unique<tags::bytearray_tag>(data);
                break;
            }
            case Tag::Type::List: {
                auto& list = tag.asList();
                if (list.empty()) {
                    res.value[key] = make_unique<tags::tag_list_tag>();
                    break;
                }
                tags::tag_list_tag obj = TagToSNBT_List_Helper(&tag);
                res.value[key] = make_unique<tags::tag_list_tag>(obj);
                break;
            }
            case Tag::Type::Compound: {
                auto obj = tags::compound_tag(false);
                TagToSNBT_Compound_Helper(obj, &tag);
                res.value[key] = make_unique<tags::compound_tag>(obj);
                break;
            }
            default:
                res.value[key].reset();
                break;
        }
    }
}

string TagToSNBT(Tag* nbt) {
    if (nbt->getTagType() != (char)Tag::Type::Compound)
        return "";
    tags::compound_tag root(true);
    TagToSNBT_Compound_Helper(root, nbt);

    ostringstream sout;
    sout << contexts::mojangson << root;
    return sout.str();
}


//////////////////// From SNBT ////////////////////

void SNBTToTag_Compound_Helper(Tag*& nbt, tags::compound_tag& data);
void SNBTToTag_List_Helper(Tag*& nbt, tags::compound_list_tag& data);

void SNBTToTag_List_Helper(Tag*& nbt, tags::end_list_tag& data) {
    nbt->addEnd();
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::byte_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addByte((char)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::short_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addShort((short)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::int_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addInt((int)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::long_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addLong((long long)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::float_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addFloat((float)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::double_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addDouble((double)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::string_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addString((string)dat);
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::bytearray_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addByteArray(dat.data(), dat.size());
}

void SNBTToTag_List_Helper(Tag*& nbt, tags::list_list_tag& data) {
    for (auto& dat : data.value) {
        Tag* tagList = Tag::createTag(Tag::Type::List);
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

void SNBTToTag_List_Helper(Tag*& nbt, tags::compound_list_tag& data) {
    for (auto& dat : data.value) {
        Tag* tagComp = Tag::createTag(Tag::Type::Compound);
        SNBTToTag_Compound_Helper(tagComp, dat);
        nbt->add(tagComp);
    }
}

void SNBTToTag_Compound_Helper(Tag*& nbt, tags::compound_tag& data) {
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
                nbt->putLong(key, ((tags::long_tag*)value.get())->value);
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
                Tag* res = Tag::createTag(Tag::Type::List);

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
                nbt->put(key, res);
                break;
            }
            case tag_id::tag_compound: {
                Tag* res = Tag::createTag(Tag::Type::Compound);
                tags::compound_tag* data = (tags::compound_tag*)value.get();
                SNBTToTag_Compound_Helper(res, *data);
                nbt->put(key, res);
                break;
            }
        }
    }
}

Tag* SNBTToTag(const string& snbt) {
    istringstream sin(snbt);
    tags::compound_tag root(true);
    sin >> contexts::mojangson >> root;

    Tag* res = Tag::createTag(Tag::Type::Compound);
    SNBTToTag_Compound_Helper(res, root);
    return res;
}


//////////////////// From Binary ////////////////////

Tag* BinaryNBTToTag(void* data, size_t len, size_t& offset, bool isLittleEndian) {
    void* vtbl;
    if (isLittleEndian)
        vtbl = dlsym("??_7StringByteInput@@6B@");
    else
        vtbl = dlsym("??_7BigEndianStringByteInput@@6B@");

    uintptr_t iDataInput[4] = {(uintptr_t)vtbl, offset, len, (uintptr_t)data};
    Tag* tag = Tag::createTag(Tag::Type::Compound);
    auto rtn = SymCall("?read@NbtIo@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z",
                       unique_ptr<Tag>*, Tag**, void*)(&tag, (void*)iDataInput);

    offset = iDataInput[1];
    return rtn->get();
}

Tag* BinaryNBTToTag(void* data, size_t len, bool isLittleEndian) {
    size_t offset = 0;
    return BinaryNBTToTag(data, len, offset, isLittleEndian);
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

string TagToBinaryNBT(Tag* tag, bool isLittleEndian) {
    void* vtbl;
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

void TagToJson_Compound_Helper(JSON_VALUE& res, Tag* nbt);

void TagToJson_List_Helper(JSON_VALUE& res, Tag* nbt) {
    auto& list = nbt->asList();
    for (auto& tag : list) {
        switch (tag->getTagType()) {
            case Tag::Type::End:
                res.push_back(nullptr);
                break;
            case Tag::Type::Byte:
                res.push_back(tag->asByte());
                break;
            case Tag::Type::Short:
                res.push_back(tag->asShort());
                break;
            case Tag::Type::Int:
                res.push_back(tag->asInt());
                break;
            case Tag::Type::Long:
                res.push_back(tag->asLong());
                break;
            case Tag::Type::Float:
                res.push_back(tag->asFloat());
                break;
            case Tag::Type::Double:
                res.push_back(tag->asDouble());
                break;
            case Tag::Type::String:
                res.push_back(tag->asString());
                break;
            case Tag::Type::ByteArray: {
                auto& bytes = nbt->asByteArray();
                res.push_back(base64_encode(string((char*)bytes.data.get(), bytes.size)));
                break;
            }
            case Tag::Type::List: {
                JSON_VALUE arrJson = JSON_VALUE::array();
                TagToJson_List_Helper(arrJson, tag);
                res.push_back(arrJson);
                break;
            }
            case Tag::Type::Compound: {
                JSON_VALUE arrObj = JSON_VALUE::object();
                TagToJson_Compound_Helper(arrObj, tag);
                res.push_back(arrObj);
                break;
            }
            default:
                res.push_back(nullptr);
                break;
        }
    }
}

void TagToJson_Compound_Helper(JSON_VALUE& res, Tag* nbt) {
    auto& list = nbt->asCompound();
    for (auto& [key, tag] : list) {
        switch (tag.getTagType()) {
            case Tag::Type::End:
                res.push_back({key, nullptr});
                break;
            case Tag::Type::Byte:
                res.push_back({key, tag.asByte()});
                break;
            case Tag::Type::Short:
                res.push_back({key, tag.asShort()});
                break;
            case Tag::Type::Int:
                res.push_back({key, tag.asInt()});
                break;
            case Tag::Type::Long:
                res.push_back({key, tag.asLong()});
                break;
            case Tag::Type::Float:
                res.push_back({key, tag.asFloat()});
                break;
            case Tag::Type::Double:
                res.push_back({key, tag.asDouble()});
                break;
            case Tag::Type::String:
                res.push_back({key, tag.asString()});
                break;
            case Tag::Type::ByteArray: {
                auto& bytes = tag.asByteArray();
                res.push_back({key, base64_encode(string((char*)bytes.data.get(), bytes.size))});
                break;
            }
            case Tag::Type::List: {
                JSON_VALUE arrJson = JSON_VALUE::array();
                TagToJson_List_Helper(arrJson, &tag);
                res.push_back({key, arrJson});
                break;
            }
            case Tag::Type::Compound: {
                JSON_VALUE arrObj = JSON_VALUE::object();
                TagToJson_Compound_Helper(arrObj, &tag);
                res.push_back({key, arrObj});
                break;
            }
            default:
                res.push_back({key, nullptr});
                break;
        }
    }
}

string TagToJson(Tag* nbt, int formatIndent) {
    string result;
    switch (nbt->getTagType()) {
        case Tag::Type::End:
            result = "";
            break;
        case Tag::Type::Byte:
            result = to_string(nbt->asByte());
            break;
        case Tag::Type::Short:
            result = to_string(nbt->asShort());
            break;
        case Tag::Type::Int:
            result = to_string(nbt->asInt());
            break;
        case Tag::Type::Long:
            result = to_string(nbt->asLong());
            break;
        case Tag::Type::Float:
            result = to_string(nbt->asFloat());
            break;
        case Tag::Type::Double:
            result = to_string(nbt->asDouble());
            break;
        case Tag::Type::String:
            result = nbt->asString();
            break;
        case Tag::Type::ByteArray: {
            auto& bytes = nbt->asByteArray();
            result = base64_encode(string((char*)bytes.data.get(), bytes.size));
            break;
        }
        case Tag::Type::List: {
            JSON_VALUE jsonRes = JSON_VALUE::array();
            TagToJson_List_Helper(jsonRes, nbt);
            result = jsonRes.dump(formatIndent);
            break;
        }
        case Tag::Type::Compound: {
            JSON_VALUE jsonRes = JSON_VALUE::object();
            TagToJson_Compound_Helper(jsonRes, nbt);
            result = jsonRes.dump(formatIndent);
            break;
        }
        default:
            result = "";
            break;
    }
    return result;
}