#pragma once

#ifndef COMPOUND_TAG_HEADER
#define COMPOUND_TAG_HEADER

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/Tag.h"

class CompoundTagVariant;

class CompoundTag : public ::Tag {
public:
    using TagMap = std::map<std::string, CompoundTagVariant, std::less<void>>;

    TagMap mTags;

    CompoundTag() = default;

    CompoundTag(TagMap tags) : mTags(std::move(tags)) {} // NOLINT

    CompoundTag(CompoundTag const&)            = default;
    CompoundTag& operator=(CompoundTag const&) = default;
    CompoundTag(CompoundTag&&)                 = default;
    CompoundTag& operator=(CompoundTag&&)      = default;

    [[nodiscard]] CompoundTagVariant&       operator[](std::string const& index) { return mTags[index]; }
    [[nodiscard]] CompoundTagVariant const& operator[](std::string const& index) const { return mTags.at(index); }

    [[nodiscard]] CompoundTagVariant&       at(std::string const& index) { return mTags[index]; }
    [[nodiscard]] CompoundTagVariant const& at(std::string const& index) const { return mTags.at(index); }


    LLNDAPI static std::unique_ptr<CompoundTag> fromSnbt(std::string_view snbt);

    LLNDAPI std::string                         toBinaryNbt(bool isLittleEndian = true) const;
    LLNDAPI static std::unique_ptr<CompoundTag> fromBinaryNbt(std::string_view dataView, bool isLittleEndian = true);

    LLNDAPI std::string                         toNetworkNbt() const;
    LLNDAPI static std::unique_ptr<CompoundTag> fromNetworkNbt(std::string const& data);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CompoundTag@@UEAA@XZ
    virtual ~CompoundTag();

    // vIndex: 2, symbol: ?write@CompoundTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@CompoundTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput& dis);

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

    // symbol:
    // ?end@CompoundTag@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VCompoundTagVariant@@@std@@@std@@@std@@@std@@XZ
    MCAPI TagMap::const_iterator end() const;

    // symbol: ?isEmpty@CompoundTag@@QEBA_NXZ
    MCAPI bool isEmpty() const;

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

#endif // COMPOUND_TAG_HEADER
