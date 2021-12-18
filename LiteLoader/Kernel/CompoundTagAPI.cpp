#include <MC/Actor.hpp>
#include <MC/Block.hpp>
#include <MC/BlockActor.hpp>
#include <MC/ByteArrayTag.hpp>
#include <MC/ByteTag.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/CompoundTagVariant.hpp>
#include <MC/DoubleTag.hpp>
#include <MC/FloatTag.hpp>
#include <MC/Int64Tag.hpp>
#include <MC/IntArrayTag.hpp>
#include <MC/IntTag.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ListTag.hpp>
#include <MC/NbtIo.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ShortTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/Tag.hpp>
#include <map>
#include <nbt-cpp/nbt.hpp>
#include <sstream>
#include <vector>

class DataLoadHelper;


// put value
void CompoundTag::putEnd(std::string key) {
    Tag* tag = Tag::createTag(Tag::Type::End);
    put(key, std::move(*tag));
}

struct TagMemoryChunk& CompoundTag::putIntArray(std::string key, struct TagMemoryChunk val) {
    IntArrayTag* tag = (IntArrayTag*)Tag::createTag(Tag::Type::IntArray);
    throw("TODO");
    return val;
}

double& CompoundTag::putDouble(std::string key, double val) {
    DoubleTag* tag = DoubleTag::create(val);
    double& value = tag->value();
    put(key, std::move(*tag));
    return value;
}

void CompoundTag::putByteArray(std::string key, void* data, size_t size) {
    char* written = new char[size];
    memcpy(written, data, size);
    TagMemoryChunk tmc(written, size);
    putByteArray(key, tmc);
}

// get value
double CompoundTag::getDouble(class gsl::basic_string_span<char const, -1> key) const {
    auto tag = const_cast<Tag*>(get(key))->asDoubleTag();
    if (tag)
        return tag->value();
    // TODO
    return 0.0;
};
struct TagMemoryChunk const& CompoundTag::getIntArray(class gsl::basic_string_span<char const, -1> key) const {
    auto tag = const_cast<Tag*>(get(key))->asIntArrayTag();
    throw("TODO");
    return *(TagMemoryChunk*)tag;
};

// get tag
class ByteTag const* CompoundTag::getByteTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asByteTag();
};
class ShortTag const* CompoundTag::getShortTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asShortTag();
};
class FloatTag const* CompoundTag::getFloatTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asFloatTag();
};
class DoubleTag const* CompoundTag::getDoubleTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asDoubleTag();
};
class ByteArrayTag const* CompoundTag::getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asByteArrayTag();
};
class StringTag const* CompoundTag::getStringTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asStringTag();
};
class IntArrayTag const* CompoundTag::getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asIntArrayTag();
};

CompoundTag* CompoundTag::fromItemStack(ItemStack* item) {
    return item->save().release();

    //CompoundTag* tmp = 0;
    //SymCall("?save@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ",
    //        void*, void*, CompoundTag**)(item, &tmp);
    //return tmp;
}

void CompoundTag::setItemStack(ItemStack* item) {
    using SetItemStackFn = ItemStack* (*)(ItemStack*, CompoundTag*);
    ItemStack (*func)(const CompoundTag&) = &ItemStack::fromTag;
    (*(SetItemStackFn)func)(item, this);
}

CompoundTag* CompoundTag::fromBlock(Block* blk) {
    auto tag = (CompoundTag*)((uintptr_t)blk + 96);
    return tag->clone().release();
}

void CompoundTag::setBlock(Block* blk) {
    auto tag = (CompoundTag*)((uintptr_t)blk + 96);
    tag->destroy();
    memcpy(tag, this->clone().release(), sizeof(CompoundTag));
}

CompoundTag* CompoundTag::fromActor(Actor* actor) {
    CompoundTag* tmp = CompoundTag::create();
    actor->save(*tmp);
    actor->saveWithoutId(*tmp);
    actor->addAdditionalSaveData(*tmp);

    return tmp;
}

bool CompoundTag::setActor(Actor* actor) const {
    void* vtbl = (void*)dlsym("??_7DefaultDataLoadHelper@@6B@");
    bool res = actor->load(*this, (DataLoadHelper&)vtbl);
    actor->readAdditionalSaveData(*this, (DataLoadHelper&)vtbl);
    actor->_sendDirtyActorData();
    return res;
}

CompoundTag* CompoundTag::fromPlayer(Player* player) {
    return fromActor(player);
}

bool CompoundTag::setPlayer(Player* player) {
    void* vtbl = dlsym("??_7DefaultDataLoadHelper@@6B@");
    bool res = ((ServerPlayer*)player)->load(*(CompoundTag*)this, (DataLoadHelper&)vtbl);
    player->readAdditionalSaveData(*(CompoundTag*)this, (DataLoadHelper&)vtbl);
    player->_sendDirtyActorData();
    return res;
}

bool CompoundTag::setBlockActor(BlockActor* ble) const {
    void* vtbl = dlsym("??_7DefaultDataLoadHelper@@6B@");
    ble->load(*Global<Level>, *this, (DataLoadHelper&)vtbl);
    ble->setChanged();
    return true;
}

CompoundTag* CompoundTag::fromBlockActor(BlockActor* ble) {
    CompoundTag* tmp = CompoundTag::create();
    ble->save(*tmp);
    return tmp;
}


//////////////////// SNBT ////////////////////

using namespace nbt;
using namespace std;

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
                tags::tag_list_tag obj = TagToSNBT_List_Helper((ListTag*)&tag);
                res.value[key] = make_unique<tags::tag_list_tag>(obj);
                break;
            }
            case Tag::Type::Compound: {
                auto obj = tags::compound_tag(false);
                TagToSNBT_Compound_Helper(obj, (CompoundTag*)&tag);
                res.value[key] = make_unique<tags::compound_tag>(obj);
                break;
            }
            default:
                res.value[key].reset();
                break;
        }
    }
}

string CompoundTag::toSNBT() {
    if (this->getTagType() != Tag::Type::Compound)
        return "";
    tags::compound_tag root(true);
    TagToSNBT_Compound_Helper(root, this);

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
        ListTag* tagList = ListTag::create();
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
        CompoundTag* tagComp = CompoundTag::create();
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
                ListTag* res = ListTag::create();

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

CompoundTag* CompoundTag::fromSNBT(const string& snbt) {
    istringstream sin(snbt);
    tags::compound_tag root(true);
    sin >> contexts::mojangson >> root;

    CompoundTag* res = CompoundTag::create();
    SNBTToTag_Compound_Helper(res, root);
    return res;
}

//////////////////// From Binary ////////////////////
CompoundTag* CompoundTag::fromBinaryNBT(void* data, size_t len, size_t& endOffset, bool isLittleEndian) {
    void* vtbl;
    if (isLittleEndian)
        vtbl = dlsym("??_7StringByteInput@@6B@");
    else
        vtbl = dlsym("??_7BigEndianStringByteInput@@6B@");

    uintptr_t iDataInput[4] = {(uintptr_t)vtbl, endOffset, len, (uintptr_t)data};
    auto rtn = NbtIo::read((IDataInput&)iDataInput);

    //CompoundTag* tag = CompoundTag::create();
    //auto rtn = SymCall("?read@NbtIo@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z",
    //                   unique_ptr<CompoundTag>*, CompoundTag**, void*)(&tag, (void*)iDataInput);

    endOffset = iDataInput[1];
    return rtn.release();
}

CompoundTag* CompoundTag::fromBinaryNBT(void* data, size_t len, bool isLittleEndian) {
    size_t endOffset = 0;
    return fromBinaryNBT(data, len, endOffset, isLittleEndian);
}


//////////////////// To Binary ////////////////////
// Reference from StringByteOutput and BigEndianStringByteInput
class BigEndianStringByteOutput {
    void writeBigEndianBytes(byte* bytes, size_t count) {
        auto right = bytes + count - 1;
        if (right >= bytes) {
            auto left = bytes;
            do {
                auto tmp = *left;
                *left = *right;
                *right-- = tmp;
            } while (left++ < right);
        }
        writeBytes(bytes, count);
    }

public:
    virtual ~BigEndianStringByteOutput() = default;;
    virtual void* writeString(gsl::basic_string_span<char const, -1> string_span) {
        return SymCall("?writeString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z",
                       void*, void*, gsl::basic_string_span<char const, -1>)((void*)this, string_span);
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
string CompoundTag::toBinaryNBT(bool isLittleEndian) {
    void* vtbl;
    if (isLittleEndian) {
        vtbl = dlsym("??_7StringByteOutput@@6B@");
    } else {
        auto tmp = BigEndianStringByteOutput();
        vtbl = *(void**)&tmp;
    }
    string result = "";
    void* iDataOutput[2] = {vtbl, &result};
    NbtIo::write(this, (IDataOutput&)iDataOutput);
    return result;
}
