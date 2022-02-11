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
#include <MC/EndTag.hpp>
#include <MC/StringTag.hpp>
#include <MC/Tag.hpp>
#include <map>
#include <nbt-cpp/nbt.hpp>
#include <sstream>
#include <vector>

class DataLoadHelper;

std::unique_ptr<CompoundTag> CompoundTag::create() {
    return std::unique_ptr<CompoundTag>((CompoundTag*)Tag::newTag(Tag::Type::Compound).release());
}

#pragma region Set
// put value
void CompoundTag::putEnd(std::string key) {
    put(key, EndTag::create());
}

double& CompoundTag::putDouble(std::string key, double val) {
    return put(key, DoubleTag::create(val))->asDoubleTag()->value();
}

void CompoundTag::putByteArray(std::string key, char data[], size_t size)
{
    TagMemoryChunk tmc(data, size);
    putByteArray(key, tmc);
}

void CompoundTag::putIntArray(std::string key, int data[], size_t size)
{
    TagMemoryChunk tmc((char*)data, size*4);
    putIntArray(key, tmc);
}

struct TagMemoryChunk& CompoundTag::putIntArray(std::string key, struct TagMemoryChunk val)
{
    return put(key, IntArrayTag::create(val))->asIntArrayTag()->value();
}

#pragma endregion

#pragma region Get

inline map<std::string, CompoundTagVariant>& CompoundTag::value()
{
    return dAccess<map<std::string, CompoundTagVariant>, 8>(this);
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
    return tag->value();
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

class IntArrayTag const* CompoundTag::getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const
{
    return const_cast<Tag*>(get(key))->asIntArrayTag();
};

//class StringTag const* CompoundTag::getStringTag(class gsl::basic_string_span<char const, -1> key) const {
//    return const_cast<Tag*>(get(key))->asStringTag();
//};

class ListTag const* CompoundTag::getListTag(class gsl::basic_string_span<char const, -1> key) const {
    return getList(key);
};

class CompoundTag const* CompoundTag::getCompoundTag(class gsl::basic_string_span<char const, -1> key) const {
    return getCompound(key);
};

Tag* CompoundTag::operator[](class gsl::basic_string_span<char const, -1> key) {
    return get(key);
}

#pragma endregion

#pragma region Convert

std::unique_ptr<CompoundTag> CompoundTag::fromItemStack(ItemStack* item) {
    return item->save();
}

void CompoundTag::setItemStack(ItemStack* item) {
    using SetItemStackFn = ItemStack* (*)(ItemStack*, CompoundTag*);
    ItemStack (*func)(const CompoundTag&) = &ItemStack::fromTag;
    (*(SetItemStackFn)func)(item, this);
}

std::unique_ptr<CompoundTag> CompoundTag::fromBlock(Block* blk) {
    auto tag = (CompoundTag*)((uintptr_t)blk + 96);
    return tag->clone();
}

void CompoundTag::setBlock(Block* blk) {
    auto tag = (CompoundTag*)((uintptr_t)blk + 96);
    tag->deepCopy(*this);
}

std::unique_ptr<CompoundTag> CompoundTag::fromActor(Actor* actor) {
    auto tag = CompoundTag::create();
    actor->save(*tag);
    //actor->saveWithoutId(*tag);
    //actor->addAdditionalSaveData(*tag);

    return std::move(tag);
}

bool CompoundTag::setActor(Actor* actor) const {
    void* vtbl = (void*)dlsym("??_7DefaultDataLoadHelper@@6B@");
    bool res = actor->load(*this, (DataLoadHelper&)vtbl);
    //actor->readAdditionalSaveData(*this, (DataLoadHelper&)vtbl);
    actor->_sendDirtyActorData();
    return res;
}

std::unique_ptr<CompoundTag> CompoundTag::fromPlayer(Player* player) {
    return fromActor(player);
}

bool CompoundTag::setPlayer(Player* player) {
    return setActor(player);
}

bool CompoundTag::setBlockActor(BlockActor* ble) const {
    void* vtbl = dlsym("??_7DefaultDataLoadHelper@@6B@");
    ble->load(*Global<Level>, *this, (DataLoadHelper&)vtbl);
    ble->setChanged();
    return true;
}

std::unique_ptr<CompoundTag> CompoundTag::fromBlockActor(BlockActor* ble) {
    auto tag = CompoundTag::create();
    ble->save(*tag);
    return std::move(tag);
}

#pragma endregion

using namespace nbt;
using namespace std;

#pragma region To SNBT
//////////////////// SNBT ////////////////////
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

void TagToSNBT_List_Helper(tags::intarray_list_tag& res, ListTag* nbt)
{
    auto& list = nbt->value();
    for (auto& tag : list)
    {
        auto& bytes = tag->asIntArrayTag()->value();

        int* raw = (int*)bytes.data.get();
        vector<int32_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size/4; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

tags::tag_list_tag TagToSNBT_List_Helper(ListTag* nbt) {
    //auto& list = nbt->value();
    //if (list.empty()) {
    //    return tags::tag_list_tag();
    //}

    switch (nbt->getElementType()) {
        case Tag::Type::End:
            return tags::end_list_tag().as_tags();
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
        case Tag::Type::IntArray: {
            tags::intarray_list_tag data;
            TagToSNBT_List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::List: {
            tags::list_list_tag res;
            for (auto& tag : nbt->value())
            {
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
            case Tag::Type::IntArray: {
                auto& bytes = tag.asIntArrayTag()->value();
                int* raw = (int*)bytes.data.get();
                vector<int32_t> data;
                data.reserve(bytes.size);
                for (int i = 0; i < bytes.size/4; ++i)
                    data.emplace_back(raw[i]);

                res.value[key] = make_unique<tags::intarray_tag>(data);
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

#pragma endregion

#pragma region From SNBT
//////////////////// From SNBT ////////////////////

void SNBTToTag_Compound_Helper(unique_ptr<CompoundTag>& nbt, tags::compound_tag& data);
void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::compound_list_tag& data);

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::end_list_tag& data) {
    //nbt->addEnd();
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::byte_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addByte((unsigned char)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::short_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addShort((short)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::int_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addInt((int)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::long_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addInt64((long long)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::float_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addFloat((float)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::double_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addDouble((double)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::string_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addString((string)dat);
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::bytearray_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addByteArray((char*)dat.data(), dat.size());
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::intarray_list_tag& data) {
    for (auto& dat : data.value)
        nbt->addIntArray(dat.data(), dat.size());
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::list_list_tag& data) {
    for (auto& dat : data.value)
    {
        unique_ptr<ListTag> tagList = ListTag::create();
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
            case tag_id::tag_intarray:
                SNBTToTag_List_Helper(tagList, *(tags::intarray_list_tag*)dat.get());
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
        nbt->add(Tag::asTag(std::move(tagList)));
    }
}

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::compound_list_tag& data) {
    for (auto& dat : data.value) {
        auto tagComp = CompoundTag::create();
        SNBTToTag_Compound_Helper(tagComp, dat);
        nbt->add(Tag::asTag(std::move(tagComp)));
    }
}

void SNBTToTag_Compound_Helper(unique_ptr<CompoundTag>& nbt, tags::compound_tag& data) {
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
                nbt->putByteArray(key, (char*)data.data(), data.size());
                break;
            }
            case tag_id::tag_intarray: {
                auto& data = ((tags::intarray_tag*)value.get())->value;
                nbt->putIntArray(key, data.data(), data.size());
                break;
            }
            case tag_id::tag_list: {
                unique_ptr<ListTag> res = ListTag::create();

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
                    case tag_id::tag_intarray:
                        SNBTToTag_List_Helper(res, *(tags::intarray_list_tag*)data);
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
                nbt->put(key, Tag::asTag(std::move(res)));
                break;
            }
            case tag_id::tag_compound: {
                auto res = CompoundTag::create();
                tags::compound_tag* data = (tags::compound_tag*)value.get();
                SNBTToTag_Compound_Helper(res, *data);
                nbt->put(key, Tag::asTag(std::move(res)));
                break;
            }
        }
    }
}

std::unique_ptr<CompoundTag> CompoundTag::fromSNBT(const string& snbt) {
    istringstream sin(snbt);
    tags::compound_tag root(true);
    sin >> contexts::mojangson >> root;

    auto res = CompoundTag::create();
    SNBTToTag_Compound_Helper(res, root);
    return res;
}

#pragma endregion

#pragma region From Binary
//////////////////// From Binary ////////////////////
std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(void* data, size_t len, size_t& endOffset, bool isLittleEndian) {
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
    return rtn;
}

std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(void* data, size_t len, bool isLittleEndian) {
    size_t endOffset = 0;
    return fromBinaryNBT(data, len, endOffset, isLittleEndian);
}

#pragma endregion

#pragma region To Binary
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

#pragma endregion

#pragma region To Formatted SNBT
#include <Utils/StringHelper.h>

void __appendString(std::ostringstream& oss, std::string const& str)
{
    oss << '"';
    for (auto& c : str) {
        switch (c)
        {
            case '"':
                oss << "\\\"";
                break;
            case '\\':
                oss << "\\\\";
                break;
            case '\b':
                oss << "\\b";
                break;
            case '\f':
                oss << "\\f";
                break;
            case '\n':
                oss << "\\n";
                break;
            case '\r':
                oss << "\\r";
                break;
            case '\t':
                oss << "\\t";
                break;
            default:
                oss << c;
        }
    }
    oss << '"';
}

inline void __appendSpace(std::ostringstream& oss, int indent, int level)
{
    switch (indent * level)
    {
        case 0:
            break;
        case 4:
            oss << "    ";
            break;
        case 8:
            oss << "        ";
            break;
        case 12:
            oss << "            ";
            break;
        case 16:
            oss << "                ";
            break;
        case 20:
            oss << "                    ";
            break;
        default:
            std::string spaces;
            spaces.resize(indent * level, ' ');
            oss << spaces;
            break;
    }
}

inline void __appendReturnSpace(std::ostringstream& oss, int indent, int level)
{
    oss << '\n';
    __appendSpace(oss, indent, level);
}

template <typename T>
inline void __appendSNBT(std::ostringstream& oss, T&, int indent, int level, SnbtFormat snbtFormat) = delete;
template <>
inline void __appendSNBT(std::ostringstream& oss, CompoundTag& tag, int indent, int level, SnbtFormat snbtFormat);
template <>
inline void __appendSNBT(std::ostringstream& oss, ListTag& tag, int indent, int level, SnbtFormat snbtFormat);


template <>
inline void __appendSNBT(std::ostringstream& oss, EndTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
}
template <>
inline void __appendSNBT(std::ostringstream& oss, ByteTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    oss << (int)(signed char)tag.value() << 'b';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, ShortTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    oss << tag.value() << 's';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, IntTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    oss << tag.value();
}
template <>
inline void __appendSNBT(std::ostringstream& oss, Int64Tag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    oss << tag.value() << 'L';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, FloatTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    oss << tag.value() << 'f';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, DoubleTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    oss << tag.value() << 'd';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, ByteArrayTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    auto val = tag.value().data.get();
    size_t size = tag.value().size;
    bool first = true;
    std::string const& separator = snbtFormat == SnbtFormat::Minimize ? "," : ", ";
    oss << "[B; ";
    for (size_t i = 0; i < size; ++i)
    {
        if (!first)
            oss << separator;
        first = false;
        oss << (int)val[i] << 'b';
    }
    oss << ']';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, IntArrayTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    auto val = tag.value().data.get();
    size_t size = tag.value().size;
    bool first = true;
    oss << "[I; ";
    std::string const& separator = snbtFormat == SnbtFormat::Minimize ? "," : ", ";
    for (size_t i = 0; i < size; i += 4)
    {
        if (!first)
            oss << separator;
        first = false;
        oss << *(int*)&val[i];
    }
    oss << ']';
}

template <>
inline void __appendSNBT(std::ostringstream& oss, StringTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    __appendString(oss, tag.value());
}

template <>
inline void __appendSNBT(std::ostringstream& oss, ListTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    if (tag.size() == 0)
    {
        oss << "[]";
        return;
    }
    auto childrenType = tag.getElementType();
    bool first = true;
    bool shouldReturn = snbtFormat == SnbtFormat::AlwayNewLine;
    oss << '[';
    for (auto& child : tag)
    {
        if (!first)
        {
            oss << ',';
            if (!shouldReturn)
                oss << ' ';
        }
        switch (childrenType)
        {
            case Tag::End:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asEndTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Byte:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asByteTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Short:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asShortTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Int:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asIntTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Int64:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asInt64Tag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Float:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asFloatTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Double:
                if (snbtFormat == SnbtFormat::AlwayNewLine)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asDoubleTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::ByteArray:
                if (snbtFormat != SnbtFormat::Minimize)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asByteArrayTag(), indent, level + 1, snbtFormat);
                shouldReturn = true;
                break;
            case Tag::String:
                if (snbtFormat != SnbtFormat::Minimize)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asStringTag(), indent, level + 1, snbtFormat);
                shouldReturn = true;
                break;
            case Tag::List:
                if (snbtFormat != SnbtFormat::Minimize)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asListTag(), indent, level + 1, snbtFormat);
                shouldReturn = true;
                break;
            case Tag::Compound:
                if (snbtFormat != SnbtFormat::Minimize)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asCompoundTag(), indent, level + 1, snbtFormat);
                shouldReturn = true;
                break;
            case Tag::IntArray:
                if (snbtFormat != SnbtFormat::Minimize)
                    __appendReturnSpace(oss, indent, level + 1);
                __appendSNBT(oss, *child->asIntArrayTag(), indent, level + 1, snbtFormat);
                shouldReturn = true;
                break;
            default:
                break;
        }
        first = false;
    }
    if (shouldReturn && snbtFormat != SnbtFormat::Minimize)
        __appendReturnSpace(oss, indent, level);
    oss << ']';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, CompoundTag& tag, int indent, int level, SnbtFormat snbtFormat)
{
    if (tag.isEmpty())
    {
        oss << "{}";
        return;
    }
    bool first = true;
    oss << '{';
    for (auto& [key, child] : tag)
    {
        if (!first)
            oss << ',';
        if (snbtFormat == SnbtFormat::Minimize)
        {
            __appendString(oss, key);
            oss << ":";
        }
        else
        {
            __appendReturnSpace(oss, indent, level + 1);
            __appendString(oss, key);
            oss << ": ";
        }
        auto tag = const_cast<Tag*>(child.get());
        switch (tag->getTagType())
        {
            case Tag::End:
                __appendSNBT(oss, *tag->asEndTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Byte:
                __appendSNBT(oss, *tag->asByteTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Short:
                __appendSNBT(oss, *tag->asShortTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Int:
                __appendSNBT(oss, *tag->asIntTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Int64:
                __appendSNBT(oss, *tag->asInt64Tag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Float:
                __appendSNBT(oss, *tag->asFloatTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Double:
                __appendSNBT(oss, *tag->asDoubleTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::ByteArray:
                __appendSNBT(oss, *tag->asByteArrayTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::String:
                __appendSNBT(oss, *tag->asStringTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::List:
                __appendSNBT(oss, *tag->asListTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::Compound:
                __appendSNBT(oss, *tag->asCompoundTag(), indent, level + 1, snbtFormat);
                break;
            case Tag::IntArray:
                __appendSNBT(oss, *tag->asIntArrayTag(), indent, level + 1, snbtFormat);
                break;
            default:
                break;
        }
        first = false;
    }
    if (snbtFormat != SnbtFormat::Minimize)
        __appendReturnSpace(oss, indent, level);
    oss << '}';
}

string CompoundTag::toSNBT(int indent, SnbtFormat snbtFormat)
{
    if (this->getTagType() != Tag::Type::Compound)
        return "";
    std::ostringstream oss;
    /*auto result = */ __appendSNBT<CompoundTag>(oss, *this, indent, 0, snbtFormat);
    //if (!result)
    //    return "";
    return oss.str();
}

#pragma endregion

#pragma region From SNBT For Tag of BDS

#pragma endregion
