#pragma once

#include "liteloader/api/base/Concepts.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ListTag : public ::Tag {
public:
    using List = std::vector<std::unique_ptr<Tag>>;

    List      mList;
    Tag::Type mType;

public:
    // prevent constructor by default
    constexpr ListTag& operator=(ListTag const& other) {
        mType = other.mType;
        mList.clear();
        mList.resize(other.mList.size());
        for (size_t i = 0; i < other.mList.size(); i++) { mList[i] = std::move(other.mList[i]->copy()); }
        return *this;
    }
    constexpr ListTag(ListTag const& other) {
        mType = other.mType;
        mList.clear();
        mList.resize(other.mList.size());
        for (size_t i = 0; i < other.mList.size(); i++) { mList[i] = std::move(other.mList[i]->copy()); }
    }

    template <typename TagType>
    constexpr ListTag(std::vector<TagType> const& tags) {
        if (tags.empty()) {
            mType = Tag::Type::End;
        } else {
            mType = tags[0].getId();
            mList.resize(tags.size());
            for (size_t i = 0; i < tags.size(); i++) { mList[i] = std::make_unique<TagType>(tags[i]); }
        }
    }

    template <typename TagType>
    constexpr ListTag(std::initializer_list<TagType> tags) : ListTag(std::vector<TagType>{std::move(tags)}) {}

    [[nodiscard]] Tag&       operator[](size_t index) { return *mList[index]; }
    [[nodiscard]] Tag const& operator[](size_t index) const { return *mList[index]; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ListTag@@UEAA@XZ
    virtual ~ListTag();

    // vIndex: 1, symbol: ?deleteChildren@ListTag@@UEAAXXZ
    virtual void deleteChildren();

    // vIndex: 2, symbol: ?write@ListTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@ListTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@ListTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ListTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ListTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 8, symbol:
    // ?print@ListTag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
    virtual void print(std::string const&, class PrintStream&) const;

    // vIndex: 9, symbol: ?copy@ListTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ListTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??0ListTag@@QEAA@XZ
    MCAPI ListTag();

    // symbol: ?add@ListTag@@QEAAXV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@@Z
    MCAPI void add(std::unique_ptr<class Tag>);

    // symbol: ?copyList@ListTag@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> copyList() const;

    // symbol: ?erase@ListTag@@QEAAX_K@Z
    MCAPI void erase(uint64);

    // symbol: ?forEachCompoundTag@ListTag@@QEBAXV?$function@$$A6AXAEBVCompoundTag@@@Z@std@@@Z
    MCAPI void forEachCompoundTag(std::function<void(class CompoundTag const&)>) const;

    // symbol: ?get@ListTag@@QEBAPEAVTag@@H@Z
    MCAPI class Tag* get(int) const;

    // symbol: ?getCompound@ListTag@@QEAAPEAVCompoundTag@@_K@Z
    MCAPI class CompoundTag* getCompound(uint64);

    // symbol: ?getCompound@ListTag@@QEBAPEBVCompoundTag@@_K@Z
    MCAPI class CompoundTag const* getCompound(uint64) const;

    // symbol: ?getDouble@ListTag@@QEBANH@Z
    MCAPI double getDouble(int) const;

    // symbol: ?getFloat@ListTag@@QEBAMH@Z
    MCAPI float getFloat(int) const;

    // symbol: ?getInt@ListTag@@QEBAHH@Z
    MCAPI int getInt(int) const;

    // symbol: ?getString@ListTag@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI std::string const& getString(int) const;

    // symbol: ?popBack@ListTag@@QEAAXXZ
    MCAPI void popBack();

    // symbol: ?size@ListTag@@QEBAHXZ
    MCAPI int size() const;

    // NOLINTEND
};
