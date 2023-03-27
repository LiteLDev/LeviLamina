#include <magic_enum.hpp>
#include <map>
#include <nbt_cpp/nbt.hpp>
#include <sstream>
#include <vector>

#include "llapi/I18nAPI.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockActor.hpp"
#include "llapi/mc/ByteArrayTag.hpp"
#include "llapi/mc/ByteTag.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/CompoundTagVariant.hpp"
#include "llapi/mc/DoubleTag.hpp"
#include "llapi/mc/EndTag.hpp"
#include "llapi/mc/FloatTag.hpp"
#include "llapi/mc/Int64Tag.hpp"
#include "llapi/mc/IntArrayTag.hpp"
#include "llapi/mc/IntTag.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/ListTag.hpp"
#include "llapi/mc/NbtIo.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/ShortTag.hpp"
#include "llapi/mc/StringTag.hpp"
#include "llapi/mc/Tag.hpp"
#include "llapi/memory/MemoryUtils.h"

#include "liteloader/LiteLoader.h"

using ll::memory::dAccess;

using ll::logger;
using magic_enum::enum_integer;

class DataLoadHelper;

std::unique_ptr<CompoundTag> CompoundTag::create() {
    return std::unique_ptr<CompoundTag>((CompoundTag*)Tag::newTag(Tag::Type::Compound).release());
}

#pragma region Set
// put value
void CompoundTag::putEnd(std::string key) { put(key, EndTag::create()); }

double& CompoundTag::putDouble(std::string key, double val) {
    return put(key, DoubleTag::create(val))->asDoubleTag()->value();
}

void CompoundTag::putByteArray(std::string key, char data[], size_t size) {
    TagMemoryChunk tmc(data, size);
    putByteArray(key, tmc);
}

void CompoundTag::putIntArray(std::string key, int data[], size_t size) {
    TagMemoryChunk tmc((char*)data, size * 4);
    putIntArray(key, tmc);
}

struct TagMemoryChunk& CompoundTag::putIntArray(std::string key, struct TagMemoryChunk val) {
    return put(key, IntArrayTag::create(val))->asIntArrayTag()->value();
}

#pragma endregion

#pragma region Get

inline map<std::string, CompoundTagVariant>& CompoundTag::value() {
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

// BDS has implemented this interface
// class ShortTag const* CompoundTag::getShortTag(class gsl::basic_string_span<char const, -1> key) const
//{
//    return const_cast<Tag*>(get(key))->asShortTag();
//};

class FloatTag const* CompoundTag::getFloatTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asFloatTag();
};

class DoubleTag const* CompoundTag::getDoubleTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asDoubleTag();
};

class ByteArrayTag const* CompoundTag::getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asByteArrayTag();
};

class IntArrayTag const* CompoundTag::getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const {
    return const_cast<Tag*>(get(key))->asIntArrayTag();
};

// class StringTag const* CompoundTag::getStringTag(class gsl::basic_string_span<char const, -1> key) const {
//     return const_cast<Tag*>(get(key))->asStringTag();
// };

class ListTag const* CompoundTag::getListTag(class gsl::basic_string_span<char const, -1> key) const {
    return getList(key);
};

class CompoundTag const* CompoundTag::getCompoundTag(class gsl::basic_string_span<char const, -1> key) const {
    return getCompound(key);
};

Tag* CompoundTag::operator[](class gsl::basic_string_span<char const, -1> key) { return get(key); }

#pragma endregion

#pragma region Convert

std::unique_ptr<CompoundTag> CompoundTag::fromItemStack(ItemStack* item) { return item->save(); }

void CompoundTag::setItemStack(ItemStack* item) {
    using SetItemStackFn                  = ItemStack* (*)(ItemStack*, CompoundTag*);
    ItemStack (*func)(const CompoundTag&) = &ItemStack::fromTag;
    (*(SetItemStackFn)func)(item, this);
}

std::unique_ptr<CompoundTag> CompoundTag::fromBlock(Block* block) {
    auto tag = (CompoundTag*)((uintptr_t)block + 160); // dAccess Block::Block
    return tag->clone();
}

void CompoundTag::setBlock(Block* blk) {
    auto tag = (CompoundTag*)((uintptr_t)blk + 160); // dAccess Block::Block
    tag->deepCopy(*this);
}

std::unique_ptr<CompoundTag> CompoundTag::fromActor(Actor* actor) {
    auto tag = CompoundTag::create();
    actor->save(*tag);
    // actor->saveWithoutId(*tag);
    // actor->addAdditionalSaveData(*tag);

    return std::move(tag);
}

bool CompoundTag::setActor(Actor* actor) const {
    void* vtbl = (void*)LL_RESOLVE_SYMBOL("??_7DefaultDataLoadHelper@@6B@");
    bool  res  = actor->load(*this, (DataLoadHelper&)vtbl);
    // actor->readAdditionalSaveData(*this, (DataLoadHelper&)vtbl);
    actor->_sendDirtyActorData();
    return res;
}

std::unique_ptr<CompoundTag> CompoundTag::fromPlayer(Player* player) { return fromActor(player); }

bool CompoundTag::setPlayer(Player* player) { return setActor(player); }

bool CompoundTag::setBlockActor(BlockActor* blockActor) const {
    void* vtbl = LL_RESOLVE_SYMBOL("??_7DefaultDataLoadHelper@@6B@");
    blockActor->load(*Global<Level>, *this, (DataLoadHelper&)vtbl);
    blockActor->refreshData();
    return true;
}

std::unique_ptr<CompoundTag> CompoundTag::fromBlockActor(BlockActor* blockActor) {
    auto tag = CompoundTag::create();
    blockActor->save(*tag);
    return std::move(tag);
}

#pragma endregion

using namespace nbt;
using namespace std;

#include "llapi/LoggerAPI.h"

inline void
OutputNBTError(std::string const& errorMsg, int errorCode, std::string errorWhat, std::string const& functionName) {
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In {}", functionName);
}

#define CatchNBTError(func)                                                                                            \
    catch (const seh_exception& e) {                                                                                   \
        OutputNBTError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), func);            \
    }                                                                                                                  \
    catch (const std::exception& e) {                                                                                  \
        OutputNBTError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), func);               \
    }                                                                                                                  \
    catch (...) {                                                                                                      \
        OutputNBTError("Uncaught Exception Detected!", -1, "", func);                                                  \
    }

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
                *left    = *right;
                *right-- = tmp;
            } while (left++ < right);
        }
        writeBytes(bytes, count);
    }

public:
    virtual ~BigEndianStringByteOutput() = default;
    ;
    virtual void* writeString(gsl::basic_string_span<char const, -1> string_span) {
        return LL_SYMBOL_CALL("?writeString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z", void*, void*, gsl::basic_string_span<char const, -1>)(
            (void*)this, std::move(string_span)
        );
    }
    virtual void* writeLongString(gsl::basic_string_span<char const, -1> string_span) {
        return LL_SYMBOL_CALL("?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z", void*, void*, gsl::basic_string_span<char const, -1>)(
            (void*)this, std::move(string_span)
        );
    }
    virtual void  writeFloat(float data) { writeBigEndianBytes((byte*)&data, 4); }
    virtual void  writeDouble(double data) { writeBigEndianBytes((byte*)&data, 8); }
    virtual void  writeByte(byte data) { writeBytes(&data, 1); }
    virtual void  writeShort(short data) { writeBigEndianBytes((byte*)&data, 2); }
    virtual void  writeInt(int data) { writeBigEndianBytes((byte*)&data, 4); }
    virtual void  writeLongLong(long long data) { writeBigEndianBytes((byte*)&data, 8); }
    virtual void* writeBytes(byte* bytes, size_t count) {
        return LL_SYMBOL_CALL("?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z", void*, void*, byte*, size_t)(
            (void*)this, bytes, count
        );
    }
};

string CompoundTag::toBinaryNBT(bool isLittleEndian) {
    void* vtbl;
    if (isLittleEndian) {
        vtbl = LL_RESOLVE_SYMBOL("??_7StringByteOutput@@6B@");
    } else {
        auto tmp = BigEndianStringByteOutput();
        vtbl     = *(void**)&tmp;
    }
    string result         = "";
    void*  iDataOutput[2] = {vtbl, &result};
    NbtIo::write(this, (IDataOutput&)iDataOutput);
    return result;
}

std::string CompoundTag::nbtListToBinary(std::vector<std::unique_ptr<CompoundTag>> tags, bool isLittleEndian) {
    std::string result = "";
    for (auto& tag : tags) {
        result += tag->toBinaryNBT(isLittleEndian);
    }
    return result;
}

#pragma endregion

#pragma region From Binary
//////////////////// From Binary ////////////////////
std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian) {
    void* vtbl;
    if (isLittleEndian)
        vtbl = LL_RESOLVE_SYMBOL("??_7StringByteInput@@6B@");
    else
        vtbl = LL_RESOLVE_SYMBOL("??_7BigEndianStringByteInput@@6B@");

    uintptr_t iDataInput[4] = {(uintptr_t)vtbl, offset, len, (uintptr_t)data};
    auto      rtn           = NbtIo::read((IDataInput&)iDataInput);

    offset = iDataInput[1];
    return rtn;
}

std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(void* data, size_t len, bool isLittleEndian) {
    size_t endOffset = 0;
    return fromBinaryNBT(data, len, endOffset, isLittleEndian);
}

std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(std::string const& data, size_t& offset, bool isLittleEndian) {
    return fromBinaryNBT((void*)data.c_str(), data.size(), offset, isLittleEndian);
}

std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(std::string const& data, bool isLittleEndian) {
    size_t endOffset = 0;
    return fromBinaryNBT(data, endOffset, isLittleEndian);
}

std::vector<std::unique_ptr<CompoundTag>> CompoundTag::nbtListFromBinary(std::string const& data, bool isLittleEndian) {
    std::vector<std::unique_ptr<CompoundTag>> rtn;
    size_t                                    endOffset = 0;
    while (endOffset < data.size()) {
        auto tmp = CompoundTag::fromBinaryNBT(data, endOffset, isLittleEndian);
        if (tmp)
            rtn.push_back(std::move(tmp));
    }
    return rtn;
}

#pragma endregion

#pragma region To Network NBT

//////////////////// To Network ////////////////////
#include "llapi/mc/BinaryStream.hpp"
std::string CompoundTag::toNetworkNBT() const {
    BinaryStream bs;
    bs.writeCompoundTag(*this);
    return bs.getAndReleaseData();
}

std::string CompoundTag::nbtListToNetwork(std::vector<std::unique_ptr<CompoundTag>> tags) {
    BinaryStream bs;
    for (auto& tag : tags)
        bs.writeCompoundTag(*tag);
    return bs.getAndReleaseData();
}

#pragma endregion

#pragma region From Network NBT

//////////////////// From Network ////////////////////
std::unique_ptr<CompoundTag> CompoundTag::fromNetworkNBT(std::string const& data) {
    ReadOnlyBinaryStream bs(data, false);
    return bs.getCompoundTag();
}
std::vector<std::unique_ptr<CompoundTag>> CompoundTag::nbtListFromNetwork(std::string const& data) {
    std::vector<std::unique_ptr<CompoundTag>> rtn;
    ReadOnlyBinaryStream                      bs(data, false);
    while (bs.getUnreadLength()) {
        rtn.emplace_back(bs.getCompoundTag());
    }
    return rtn;
}

#pragma endregion

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

        char*          raw = (char*)bytes.data.get();
        vector<int8_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

void TagToSNBT_List_Helper(tags::intarray_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        auto& bytes = tag->asIntArrayTag()->value();

        int*            raw = (int*)bytes.data.get();
        vector<int32_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size / 4; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

tags::tag_list_tag TagToSNBT_List_Helper(ListTag* nbt) {
    // auto& list = nbt->value();
    // if (list.empty()) {
    //     return tags::tag_list_tag();
    // }

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
        for (auto& tag : nbt->value()) {
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
            auto&          bytes = tag.asByteArrayTag()->value();
            char*          raw   = (char*)bytes.data.get();
            vector<int8_t> data;
            data.reserve(bytes.size);
            for (int i = 0; i < bytes.size; ++i)
                data.emplace_back(raw[i]);

            res.value[key] = make_unique<tags::bytearray_tag>(data);
            break;
        }
        case Tag::Type::IntArray: {
            auto&           bytes = tag.asIntArrayTag()->value();
            int*            raw   = (int*)bytes.data.get();
            vector<int32_t> data;
            data.reserve(bytes.size);
            for (int i = 0; i < bytes.size / 4; ++i)
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
            res.value[key]         = make_unique<tags::tag_list_tag>(obj);
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
    try {
        if (this->getTagType() != Tag::Type::Compound)
            return "";
        tags::compound_tag root(true);
        TagToSNBT_Compound_Helper(root, this);

        ostringstream sout;
        sout << contexts::mojangson << root;
        return sout.str();
    }
    CatchNBTError("CompoundTag::toSNBT");
    return "";
}

#pragma endregion

#pragma region From SNBT
//////////////////// From SNBT ////////////////////

void SNBTToTag_Compound_Helper(unique_ptr<CompoundTag>& nbt, tags::compound_tag& data);
void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::compound_list_tag& data);

void SNBTToTag_List_Helper(unique_ptr<ListTag>& nbt, tags::end_list_tag& data) {
    // nbt->addEnd();
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
    for (auto& dat : data.value) {
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
            auto                res  = CompoundTag::create();
            tags::compound_tag* data = (tags::compound_tag*)value.get();
            SNBTToTag_Compound_Helper(res, *data);
            nbt->put(key, Tag::asTag(std::move(res)));
            break;
        }
        }
    }
}

std::unique_ptr<CompoundTag> CompoundTag::fromSNBT(const string& snbt) {
    try {
        istringstream      sin(snbt);
        tags::compound_tag root(true);
        sin >> contexts::mojangson >> root;

        auto res = CompoundTag::create();
        SNBTToTag_Compound_Helper(res, root);
        return res;
    }
    CatchNBTError("CompoundTag::fromSNBT");
    return {};
}

#pragma endregion

#pragma region To Formatted SNBT

void __appendString(std::ostringstream& oss, std::string const& str) {
    oss << '"';
    for (auto& c : str) {
        switch (c) {
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

inline void __appendSpace(std::ostringstream& oss, int indent, int level) {
    switch (indent * level) {
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

inline void __appendReturnSpace(std::ostringstream& oss, int indent, int level) {
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
inline void __appendSNBT(std::ostringstream& oss, EndTag& tag, int indent, int level, SnbtFormat snbtFormat) {}
template <>
inline void __appendSNBT(std::ostringstream& oss, ByteTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    oss << (int)(signed char)tag.value() << 'b';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, ShortTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    oss << tag.value() << 's';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, IntTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    oss << tag.value();
}
template <>
inline void __appendSNBT(std::ostringstream& oss, Int64Tag& tag, int indent, int level, SnbtFormat snbtFormat) {
    oss << tag.value() << 'L';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, FloatTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    oss << tag.value() << 'f';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, DoubleTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    oss << tag.value() << 'd';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, ByteArrayTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    size_t size = tag.value().size;
    if (size == 0) {
        oss << "[B;]";
        return;
    }
    auto               val       = tag.value().data.get();
    bool               first     = true;
    std::string const& separator = snbtFormat == SnbtFormat::Minimize ? "," : ", ";
    oss << "[B; ";
    for (size_t i = 0; i < size; ++i) {
        if (!first)
            oss << separator;
        first = false;
        oss << (int)val[i] << 'b';
    }
    oss << ']';
}
template <>
inline void __appendSNBT(std::ostringstream& oss, IntArrayTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    size_t size = tag.value().size;
    if (size == 0) {
        oss << "[I;]";
        return;
    }
    auto val   = tag.value().data.get();
    bool first = true;
    oss << "[I; ";
    std::string const& separator = snbtFormat == SnbtFormat::Minimize ? "," : ", ";
    for (size_t i = 0; i < size; i += 4) {
        if (!first)
            oss << separator;
        first = false;
        oss << *(int*)&val[i];
    }
    oss << ']';
}

template <>
inline void __appendSNBT(std::ostringstream& oss, StringTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    __appendString(oss, tag.value());
}

template <>
inline void __appendSNBT(std::ostringstream& oss, ListTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    if (tag.size() == 0) {
        oss << "[]";
        return;
    }
    auto childrenType = tag.getElementType();
    bool first        = true;
    bool shouldReturn = snbtFormat == SnbtFormat::AlwayNewLine;
    oss << '[';
    for (auto& child : tag) {
        if (!first) {
            oss << ',';
            if (!shouldReturn)
                oss << ' ';
        }
        switch (childrenType) {
        case Tag::Type::End:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asEndTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Byte:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asByteTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Short:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asShortTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Int:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asIntTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Int64:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asInt64Tag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Float:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asFloatTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Double:
            if (snbtFormat == SnbtFormat::AlwayNewLine)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asDoubleTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::ByteArray:
            if (snbtFormat != SnbtFormat::Minimize)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asByteArrayTag(), indent, level + 1, snbtFormat);
            shouldReturn = true;
            break;
        case Tag::Type::String:
            if (snbtFormat != SnbtFormat::Minimize)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asStringTag(), indent, level + 1, snbtFormat);
            shouldReturn = true;
            break;
        case Tag::Type::List:
            if (snbtFormat != SnbtFormat::Minimize)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asListTag(), indent, level + 1, snbtFormat);
            shouldReturn = true;
            break;
        case Tag::Type::Compound:
            if (snbtFormat != SnbtFormat::Minimize)
                __appendReturnSpace(oss, indent, level + 1);
            __appendSNBT(oss, *child->asCompoundTag(), indent, level + 1, snbtFormat);
            shouldReturn = true;
            break;
        case Tag::Type::IntArray:
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
inline void __appendSNBT(std::ostringstream& oss, CompoundTag& tag, int indent, int level, SnbtFormat snbtFormat) {
    if (tag.isEmpty()) {
        oss << "{}";
        return;
    }
    bool first = true;
    oss << '{';
    for (auto& [key, child] : tag) {
        if (!first)
            oss << ',';
        if (snbtFormat == SnbtFormat::Minimize) {
            __appendString(oss, key);
            oss << ":";
        } else {
            __appendReturnSpace(oss, indent, level + 1);
            __appendString(oss, key);
            oss << ": ";
        }
        auto tag = const_cast<Tag*>(child.get());
        switch (tag->getTagType()) {
        case Tag::Type::End:
            __appendSNBT(oss, *tag->asEndTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Byte:
            __appendSNBT(oss, *tag->asByteTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Short:
            __appendSNBT(oss, *tag->asShortTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Int:
            __appendSNBT(oss, *tag->asIntTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Int64:
            __appendSNBT(oss, *tag->asInt64Tag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Float:
            __appendSNBT(oss, *tag->asFloatTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Double:
            __appendSNBT(oss, *tag->asDoubleTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::ByteArray:
            __appendSNBT(oss, *tag->asByteArrayTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::String:
            __appendSNBT(oss, *tag->asStringTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::List:
            __appendSNBT(oss, *tag->asListTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::Compound:
            __appendSNBT(oss, *tag->asCompoundTag(), indent, level + 1, snbtFormat);
            break;
        case Tag::Type::IntArray:
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

string CompoundTag::toSNBT(int indent, SnbtFormat snbtFormat) {
    try {
        if (this->getTagType() != Tag::Type::Compound)
            return "";
        std::ostringstream oss;
        __appendSNBT<CompoundTag>(oss, *this, indent, 0, snbtFormat);

        return oss.str();
    }
    CatchNBTError("CompoundTag::toFormattedSNBT");
    return "";
}

#pragma endregion

#pragma region To Pretty SNBT
#include "llapi/mc/PrettySnbtFormat.hpp"

void __appendPrettyString(std::ostringstream& oss, std::string const& str, PrettySnbtFormat const& format) {
    for (auto& c : str) {
        switch (c) {
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
}

inline void __appendPrettySpace(std::ostringstream& oss, unsigned int level, PrettySnbtFormat const& format) {
    if (level > format.mMaxLevel)
        return;
    for (unsigned i = 0; i < level; ++i) {
        oss << format.mIndent;
    }
}

inline void __appendPrettyReturnSpace(std::ostringstream& oss, unsigned int level, PrettySnbtFormat const& format) {
    if (level > format.mMaxLevel)
        return;
    oss << '\n';
    __appendPrettySpace(oss, level, format);
}

// template <typename T>
// inline void __appendPrettySNBT(std::ostringstream& oss, T&, unsigned int level, PrettySnbtFormat const& format) =
// delete;
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, CompoundTag& tag, unsigned int level, PrettySnbtFormat const& format);
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, ListTag& tag, unsigned int level, PrettySnbtFormat const& format);

template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, EndTag& tag, unsigned int level, PrettySnbtFormat const& format) {}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, ByteTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    oss << format.mValueFormats[enum_integer(Tag::Type::Byte)].mPrefix << (int)(signed char)tag.value()
        << format.mValueFormats[enum_integer(Tag::Type::Byte)].mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, ShortTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    oss << format.mValueFormats[enum_integer(Tag::Type::Short)].mPrefix << tag.value()
        << format.mValueFormats[enum_integer(Tag::Type::Short)].mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, IntTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    oss << format.mValueFormats[enum_integer(Tag::Type::Int)].mPrefix << tag.value()
        << format.mValueFormats[enum_integer(Tag::Type::Int)].mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, Int64Tag& tag, unsigned int level, PrettySnbtFormat const& format) {
    oss << format.mValueFormats[enum_integer(Tag::Type::Int64)].mPrefix << tag.value()
        << format.mValueFormats[enum_integer(Tag::Type::Int64)].mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, FloatTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    oss << format.mValueFormats[enum_integer(Tag::Type::Float)].mPrefix << tag.value()
        << format.mValueFormats[enum_integer(Tag::Type::Float)].mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, DoubleTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    oss << format.mValueFormats[enum_integer(Tag::Type::Double)].mPrefix << tag.value()
        << format.mValueFormats[enum_integer(Tag::Type::Double)].mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, ByteArrayTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    auto&  valueFormat   = format.mValueFormats[enum_integer(Tag::Type::ByteArray)];
    auto&  elementFormat = format.mValueFormats[enum_integer(Tag::Type::Byte)];
    auto&  separator     = format.mSeparator;
    size_t size          = tag.value().size;
    if (size == 0) {
        oss << valueFormat.mPrefix << valueFormat.mSuffix;
        return;
    }
    auto val   = tag.value().data.get();
    bool first = true;
    oss << valueFormat.mPrefix;
    for (size_t i = 0; i < size; ++i) {
        if (!first)
            oss << separator;
        first = false;
        oss << elementFormat.mPrefix << (int)val[i] << elementFormat.mSuffix;
    }
    oss << valueFormat.mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, IntArrayTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    auto&  valueFormat   = format.mValueFormats[enum_integer(Tag::Type::IntArray)];
    auto&  elementFormat = format.mValueFormats[enum_integer(Tag::Type::Int)];
    auto&  separator     = format.mSeparator;
    size_t size          = tag.value().size;
    if (size == 0) {
        oss << valueFormat.mPrefix << valueFormat.mSuffix;
        return;
    }
    auto val   = tag.value().data.get();
    bool first = true;
    oss << valueFormat.mPrefix;
    for (size_t i = 0; i < size; i += 4) {
        if (!first)
            oss << separator;
        first = false;
        oss << elementFormat.mPrefix << *(int*)&val[i] << elementFormat.mSuffix;
    }
    oss << valueFormat.mSuffix;
}

template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, StringTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    auto& valueFormat = format.mValueFormats[enum_integer(Tag::Type::String)];
    oss << valueFormat.mPrefix;
    __appendPrettyString(oss, tag.value(), format);
    oss << valueFormat.mSuffix;
}

template <typename type>
inline void __appendPrettyList(
    std::ostringstream&     oss,
    ListTag&                tag,
    unsigned int            level,
    PrettySnbtFormat const& format,
    Tag::Type               childrenType
) {
    bool first = true;
    for (auto& child : tag) {
        if (!first) {
            oss << format.mSeparator;
            if (format.mExpandInList[enum_integer(childrenType)])
                __appendPrettyReturnSpace(oss, level + 1, format);
        }
        __appendPrettySNBT<type>(oss, *static_cast<type*>(child), level + 1, format);
        first = false;
    }
}

template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, ListTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    auto& valueFormat = format.mValueFormats[enum_integer(Tag::Type::List)];
    if (tag.size() == 0) {
        oss << valueFormat.mPrefix << valueFormat.mSuffix;
        return;
    }
    auto childrenType = tag.getElementType();
    bool expand       = format.mExpandInList[enum_integer(childrenType)];

    oss << valueFormat.mPrefix;
    if (expand && level < format.mMaxLevel)
        __appendPrettyReturnSpace(oss, level + 1, format);
    const Tag::Type tagType = childrenType;

    switch (childrenType) {
    case Tag::Type::End:
        __appendPrettyList<EndTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Byte:
        __appendPrettyList<ByteTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Short:
        __appendPrettyList<ShortTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Int:
        __appendPrettyList<IntTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Int64:
        __appendPrettyList<Int64Tag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Float:
        __appendPrettyList<FloatTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Double:
        __appendPrettyList<DoubleTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::ByteArray:
        __appendPrettyList<ByteArrayTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::String:
        __appendPrettyList<StringTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::List:
        __appendPrettyList<ListTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::Compound:
        __appendPrettyList<CompoundTag>(oss, tag, level, format, childrenType);
        break;
    case Tag::Type::IntArray:
        __appendPrettyList<IntArrayTag>(oss, tag, level, format, childrenType);
        break;
    default:
        break;
    }

    if (expand && level < format.mMaxLevel)
        __appendPrettyReturnSpace(oss, level, format);
    oss << valueFormat.mSuffix;
}
template <>
inline void
__appendPrettySNBT(std::ostringstream& oss, CompoundTag& tag, unsigned int level, PrettySnbtFormat const& format) {
    auto& valueFormat = format.mValueFormats[enum_integer(Tag::Type::Compound)];
    if (tag.isEmpty()) {
        oss << valueFormat.mPrefix << valueFormat.mSuffix;
        return;
    }
    bool first = true;
    oss << valueFormat.mPrefix;
    for (auto& [key, child] : tag) {
        if (!first)
            oss << ',';
        if (format.mExpandCompound && level < format.mMaxLevel) {
            __appendPrettyReturnSpace(oss, level + 1, format);
        }

        oss << format.mKeyFormat.mPrefix;
        __appendPrettyString(oss, key, format);
        oss << format.mKeyFormat.mSuffix << format.mColon;

        auto tag = const_cast<Tag*>(child.get());
        switch (tag->getTagType()) {
        case Tag::Type::End:
            __appendPrettySNBT(oss, *tag->asEndTag(), level + 1, format);
            break;
        case Tag::Type::Byte:
            __appendPrettySNBT(oss, *tag->asByteTag(), level + 1, format);
            break;
        case Tag::Type::Short:
            __appendPrettySNBT(oss, *tag->asShortTag(), level + 1, format);
            break;
        case Tag::Type::Int:
            __appendPrettySNBT(oss, *tag->asIntTag(), level + 1, format);
            break;
        case Tag::Type::Int64:
            __appendPrettySNBT(oss, *tag->asInt64Tag(), level + 1, format);
            break;
        case Tag::Type::Float:
            __appendPrettySNBT(oss, *tag->asFloatTag(), level + 1, format);
            break;
        case Tag::Type::Double:
            __appendPrettySNBT(oss, *tag->asDoubleTag(), level + 1, format);
            break;
        case Tag::Type::ByteArray:
            __appendPrettySNBT(oss, *tag->asByteArrayTag(), level + 1, format);
            break;
        case Tag::Type::String:
            __appendPrettySNBT(oss, *tag->asStringTag(), level + 1, format);
            break;
        case Tag::Type::List:
            __appendPrettySNBT(oss, *tag->asListTag(), level + 1, format);
            break;
        case Tag::Type::Compound:
            __appendPrettySNBT(oss, *tag->asCompoundTag(), level + 1, format);
            break;
        case Tag::Type::IntArray:
            __appendPrettySNBT(oss, *tag->asIntArrayTag(), level + 1, format);
            break;
        default:
            break;
        }
        first = false;
    }
    if (format.mExpandCompound && level < format.mMaxLevel)
        __appendPrettyReturnSpace(oss, level, format);
    oss << valueFormat.mSuffix;
}

string CompoundTag::toPrettySNBT(bool forPlayer) const {
    try {
        return toPrettySNBT(PrettySnbtFormat::getDefaultFormat(forPlayer));
    }
    CatchNBTError("CompoundTag::toPrettySNBT");
    return "";
}
string CompoundTag::toPrettySNBT(PrettySnbtFormat const& format) const {
    try {
        if (this->getTagType() != Tag::Type::Compound)
            return "";
        std::ostringstream oss;
        __appendPrettySNBT<CompoundTag>(oss, const_cast<CompoundTag&>(*this), 0, format);
        return oss.str();
    }
    CatchNBTError("CompoundTag::toPrettySNBT");
    return "";
}

#pragma endregion

#pragma region From SNBT For Tag of BDS
#ifdef Working

inline bool __isEmptyChar(int c) { return c == ' ' || c == '\n' || c == '\t'; }
inline int  __readEmpty(std::istringstream& iss) {
    while (!iss.eof()) {
        auto c = cheof(iss);
        if (!__isEmptyChar(c))
            return c;
    }
    return '\x0';
}

inline std::string __readString(std::istringstream& iss) {
    std::ostringstream oss;
    bool               qoute = false;
    auto               c     = __readEmpty(iss);
    if (c == '"')
        qoute == true;
    else
        oss << c;
    if (qoute) {
        while (!iss.eof()) {
            c = cheof(iss);
            if (c == '"')
                break;
            oss << c;
        }
    } else {
        while (!iss.eof()) {
            c = cheof(iss);
            if (__isEmptyChar(c))
                break;
            if (c == '=')
                iss.putback(c);
            oss << c;
        }
    }
    return oss.str();
}

std::unique_ptr<Tag>&& __readStringValue(std::istringstream& iss) {
    std::ostringstream oss;
    while (!iss.eof()) {
        while (!iss.eof()) {
            auto c = cheof(iss);
            if (c == '"')
                break;
            oss << c;
        }
    }
    return StringTag::create(oss.str());
}

std::unique_ptr<Tag>&& __readIntArrayValue(std::istringstream& iss) {
    if (__readEmpty(iss) != ';')
        throw runtime_error("Expected char ';'");

    std::ostringstream oss;
    auto               res = IntArrayTag::create();
    auto               c   = __readEmpty(iss);
    while (!iss.eof()) {
        if (c == ']') {
            if (oss.eof())
                return std::move(res);
        }
        if (c == 'I' || c == ',' || c == ' ')
            return {};
    }
    return {};
}

std::unique_ptr<Tag>&& __readValue(std::istringstream& iss) {
    auto c = __readEmpty(iss);
    if (c == '"')
        return __readStringValue(iss);
    else if (c == '[') {
        auto c2 = __readEmpty(iss);
        if (c2 == 'I')
            return __readIntArrayValue(iss);
    }
}

void __readList(std::istringstream& iss, ListTag& tag) {}

void __readCompound(std::istringstream& iss, CompoundTag& tag) {
    while (true) {
        if (__readEmpty(iss) != '{')
            throw runtime_error("Expected char '{'");
        std::string key = __readString(iss);

        if (__readEmpty(iss) != '=')
            throw runtime_error("Expected char '='");

        tag.put(key, __readValue(iss));
    }
}

std::unique_ptr<CompoundTag> fromSNBT(string& snbt) {
    std::istringstream iss(snbt);
    auto               tag = CompoundTag::create();
    __readCompound(iss, *tag);
    return {};
}

#endif // Working
#pragma endregion
