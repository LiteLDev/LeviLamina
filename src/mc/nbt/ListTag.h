#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class CompoundTagVariant;

class ListTag : public ::Tag {
public:
    using List = std::vector<std::unique_ptr<Tag>>;

    List      mList;
    Tag::Type mType;

public:
    [[nodiscard]] constexpr ListTag(ListTag&&)   = default;
    LL_CLANG_CEXPR ListTag& operator=(ListTag&&) = default;

    [[nodiscard]] constexpr ListTag(ListTag const& other) : mType(other.mType) {
        mList.reserve(other.mList.size());
        for (auto& tag : other.mList) {
            mList.emplace_back(tag->copy());
        }
    }
    constexpr ListTag& operator=(ListTag const& other) {
        if (this != &other) {
            *this = ListTag{other};
        }
        return *this;
    }

    [[nodiscard]] constexpr ListTag(List tags) {
        if (tags.empty()) {
            mType = Tag::End;
        } else {
            mType = tags[0]->getId();
            mList = std::move(tags);
        }
    }
    [[nodiscard]] constexpr ListTag(std::initializer_list<CompoundTagVariant> tags);
    [[nodiscard]] constexpr ListTag(std::vector<CompoundTagVariant> tags);

    [[nodiscard]] constexpr std::unique_ptr<Tag>&       operator[](size_t index) { return mList[index]; }
    [[nodiscard]] constexpr std::unique_ptr<Tag> const& operator[](size_t index) const { return mList[index]; }

    [[nodiscard]] constexpr std::unique_ptr<Tag>&       at(size_t index) { return mList[index]; }
    [[nodiscard]] constexpr std::unique_ptr<Tag> const& at(size_t index) const { return mList[index]; }

    [[nodiscard]] constexpr size_t size() const { return mList.size(); }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ListTag@@UEAA@XZ
    virtual ~ListTag();

    // vIndex: 1, symbol: ?deleteChildren@ListTag@@UEAAXXZ
    virtual void deleteChildren();

    // vIndex: 2, symbol: ?write@ListTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@ListTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@ListTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ListTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ListTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 8, symbol:
    // ?print@ListTag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
    virtual void print(std::string const& prefix_, class PrintStream& out) const;

    // vIndex: 9, symbol: ?copy@ListTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ListTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??0ListTag@@QEAA@XZ
    MCAPI ListTag();

    // symbol: ?add@ListTag@@QEAAXV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z
    MCAPI void add(std::unique_ptr<class Tag> tag);

    // symbol: ?copyList@ListTag@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> copyList() const;

    // symbol: ?erase@ListTag@@QEAAX_K@Z
    MCAPI void erase(uint64 index);

    // symbol: ?forEachCompoundTag@ListTag@@QEBAXV?$function@$$A6AXAEBVCompoundTag@@@Z@std@@@Z
    MCAPI void forEachCompoundTag(std::function<void(class CompoundTag const&)> func) const;

    // symbol: ?get@ListTag@@QEBAPEAVTag@@H@Z
    MCAPI class Tag* get(int index) const;

    // symbol: ?getCompound@ListTag@@QEAAPEAVCompoundTag@@_K@Z
    MCAPI class CompoundTag* getCompound(uint64 index);

    // symbol: ?getCompound@ListTag@@QEBAPEBVCompoundTag@@_K@Z
    MCAPI class CompoundTag const* getCompound(uint64 index) const;

    // symbol: ?getDouble@ListTag@@QEBANH@Z
    MCAPI double getDouble(int index) const;

    // symbol: ?getFloat@ListTag@@QEBAMH@Z
    MCAPI float getFloat(int index) const;

    // symbol: ?getInt@ListTag@@QEBAHH@Z
    MCAPI int getInt(int index) const;

    // symbol: ?getInt64@ListTag@@QEBA_JH@Z
    MCAPI int64 getInt64(int index) const;

    // symbol: ?getString@ListTag@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string const& getString(int) const;

    // symbol: ?popBack@ListTag@@QEAAXXZ
    MCAPI void popBack();

    // NOLINTEND
};
