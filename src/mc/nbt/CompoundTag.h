#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

#include "ll/api/Expected.h"

class CompoundTagVariant;

class CompoundTag : public ::Tag {
public:
    using TagMap = std::map<std::string, CompoundTagVariant, std::less<void>>;

    TagMap mTags;

    CompoundTag() = default;

    CompoundTag(TagMap tags) : mTags(std::move(tags)) {} // NOLINT

    CompoundTag(std::initializer_list<TagMap::value_type> tags) : mTags(tags) {} // NOLINT

    CompoundTag(CompoundTag const&)            = default;
    CompoundTag& operator=(CompoundTag const&) = default;
    CompoundTag(CompoundTag&&)                 = default;
    CompoundTag& operator=(CompoundTag&&)      = default;

    [[nodiscard]] CompoundTagVariant&       operator[](std::string const& index) { return mTags[index]; }
    [[nodiscard]] CompoundTagVariant const& operator[](std::string const& index) const { return mTags.at(index); }

    [[nodiscard]] CompoundTagVariant&       at(std::string const& index) { return mTags[index]; }
    [[nodiscard]] CompoundTagVariant const& at(std::string const& index) const { return mTags.at(index); }

    LLNDAPI static ll::Expected<CompoundTag>
    fromSnbt(std::string_view snbt, optional_ref<size_t> parsedLength = std::nullopt) noexcept;

    LLNDAPI std::string toBinaryNbt(bool isLittleEndian = true) const;
    LLNDAPI static ll::Expected<CompoundTag>
    fromBinaryNbt(std::string_view dataView, bool isLittleEndian = true) noexcept;

    LLNDAPI std::string                      toNetworkNbt() const;
    LLNDAPI static ll::Expected<CompoundTag> fromNetworkNbt(std::string const& data) noexcept;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CompoundTag@@UEAA@XZ
    virtual ~CompoundTag();

    // vIndex: 2, symbol: ?write@CompoundTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@CompoundTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@CompoundTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@CompoundTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@CompoundTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& obj) const;

    // vIndex: 8, symbol:
    // ?print@CompoundTag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
    virtual void print(std::string const& prefix_, class PrintStream& out) const;

    // vIndex: 9, symbol: ?copy@CompoundTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@CompoundTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ?append@CompoundTag@@QEAAXAEBV1@@Z
    MCAPI void append(class CompoundTag const& tag);

    // symbol:
    // ?begin@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
    MCAPI TagMap::const_iterator begin() const;

    // symbol: ?clear@CompoundTag@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?clone@CompoundTag@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> clone() const;

    // symbol: ?contains@CompoundTag@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool contains(std::string_view name) const;

    // symbol: ?contains@CompoundTag@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Type@Tag@@@Z
    MCAPI bool contains(std::string_view name, ::Tag::Type type) const;

    // symbol: ?deepCopy@CompoundTag@@QEAAXAEBV1@@Z
    [[deprecated]] MCAPI void deepCopy(class CompoundTag const& other);

    // symbol:
    // ?end@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
    MCAPI TagMap::const_iterator end() const;

    // symbol: ?get@CompoundTag@@QEAAPEAVTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class Tag* get(std::string_view name);

    // symbol: ?get@CompoundTag@@QEBAPEBVTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class Tag const* get(std::string_view name) const;

    // symbol: ?getBoolean@CompoundTag@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI bool getBoolean(std::string_view string) const;

    // symbol: ?getByte@CompoundTag@@QEBAEV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI uchar getByte(std::string_view name) const;

    // symbol:
    // ?getByteArray@CompoundTag@@QEBAAEBV?$vector@EV?$allocator@E@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    [[deprecated]] MCAPI std::vector<uchar> const& getByteArray(std::string_view name) const;

    // symbol: ?getByteTag@CompoundTag@@QEAAPEAVByteTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class ByteTag* getByteTag(std::string_view name);

    // symbol: ?getCompound@CompoundTag@@QEAAPEAV1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class CompoundTag* getCompound(std::string_view name);

    // symbol: ?getCompound@CompoundTag@@QEBAPEBV1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class CompoundTag const* getCompound(std::string_view name) const;

    // symbol: ?getFloat@CompoundTag@@QEBAMV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI float getFloat(std::string_view name) const;

    // symbol: ?getInt@CompoundTag@@QEBAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI int getInt(std::string_view name) const;

    // symbol: ?getInt64@CompoundTag@@QEBA_JV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI int64 getInt64(std::string_view name) const;

    // symbol: ?getInt64Tag@CompoundTag@@QEAAPEAVInt64Tag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class Int64Tag* getInt64Tag(std::string_view name);

    // symbol: ?getInt64Tag@CompoundTag@@QEBAPEBVInt64Tag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class Int64Tag const* getInt64Tag(std::string_view name) const;

    // symbol: ?getIntTag@CompoundTag@@QEAAPEAVIntTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class IntTag* getIntTag(std::string_view name);

    // symbol: ?getIntTag@CompoundTag@@QEBAPEBVIntTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class IntTag const* getIntTag(std::string_view name) const;

    // symbol: ?getList@CompoundTag@@QEAAPEAVListTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class ListTag* getList(std::string_view name);

    // symbol: ?getList@CompoundTag@@QEBAPEBVListTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class ListTag const* getList(std::string_view name) const;

    // symbol: ?getShort@CompoundTag@@QEBAFV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI short getShort(std::string_view name) const;

    // symbol: ?getShortTag@CompoundTag@@QEBAPEBVShortTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class ShortTag const* getShortTag(std::string_view name) const;

    // symbol:
    // ?getString@CompoundTag@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    [[deprecated]] MCAPI std::string const& getString(std::string_view) const;

    // symbol: ?getStringTag@CompoundTag@@QEBAPEBVStringTag@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    [[deprecated]] MCAPI class StringTag const* getStringTag(std::string_view name) const;

    // symbol: ?isEmpty@CompoundTag@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?put@CompoundTag@@QEAAAEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV2@@Z
    [[deprecated]] MCAPI class Tag& put(std::string name, class Tag&& tag);

    // symbol:
    // ?put@CompoundTag@@QEAAPEAVTag@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@4@@Z
    [[deprecated]] MCAPI class Tag* put(std::string name, std::unique_ptr<class Tag> tag);

    // symbol: ?putBoolean@CompoundTag@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    [[deprecated]] MCAPI void putBoolean(std::string name, bool val);

    // symbol: ?putByte@CompoundTag@@QEAAAEAEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
    [[deprecated]] MCAPI uchar& putByte(std::string name, uchar value);

    // symbol:
    // ?putByteArray@CompoundTag@@QEAAAEAV?$vector@EV?$allocator@E@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V23@@Z
    [[deprecated]] MCAPI std::vector<uchar>& putByteArray(std::string, std::vector<uchar>);

    // symbol: ?putCompound@CompoundTag@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V1@@Z
    [[deprecated]] MCAPI class CompoundTag& putCompound(std::string name, class CompoundTag value);

    // symbol:
    // ?putCompound@CompoundTag@@QEAAPEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@3@@Z
    [[deprecated]] MCAPI class CompoundTag* putCompound(std::string name, std::unique_ptr<class CompoundTag> value);

    // symbol: ?putFloat@CompoundTag@@QEAAAEAMV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
    [[deprecated]] MCAPI float& putFloat(std::string name, float value);

    // symbol: ?putInt@CompoundTag@@QEAAAEAHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    [[deprecated]] MCAPI int& putInt(std::string name, int value);

    // symbol: ?putInt64@CompoundTag@@QEAAAEA_JV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
    [[deprecated]] MCAPI int64& putInt64(std::string name, int64 value);

    // symbol: ?putShort@CompoundTag@@QEAAAEAFV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    [[deprecated]] MCAPI short& putShort(std::string name, short value);

    // symbol: ?putString@CompoundTag@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@0@Z
    [[deprecated]] MCAPI std::string& putString(std::string name, std::string value);

    // symbol:
    // ?rawView@CompoundTag@@QEBAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@2@@std@@XZ
    MCAPI TagMap const& rawView() const;

    // symbol: ?remove@CompoundTag@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool remove(std::string_view name);

    // symbol:
    // ?rename@CompoundTag@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI void rename(std::string_view name, std::string newName);

    // symbol: ?size@CompoundTag@@QEBA_KXZ
    MCAPI uint64 size() const;

    // NOLINTEND
};

#include "mc/nbt/CompoundTagVariant.h"
