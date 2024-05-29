#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/ItemTag.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Puv::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BinaryStream;

class ItemDescriptor {
public:
    // ItemDescriptor inner types declare
    // clang-format off
    struct ItemEntry;
    struct BaseDescriptor;
    // clang-format on

    // ItemDescriptor inner types define
    enum class InternalType : schar {
        Invalid      = 0x0,
        Default      = 0x1,
        Molang       = 0x2,
        ItemTag      = 0x3,
        Deferred     = 0x4,
        ComplexAlias = 0x5,
    };

    struct ItemEntry {
    public:
        const class Item* mItem;     // this+0x0
        short             mAuxValue; // this+0x8

    public:
        // NOLINTBEGIN
        // symbol: ?getBlock@ItemEntry@ItemDescriptor@@QEBAPEBVBlock@@XZ
        MCAPI class Block const* getBlock() const;

        // NOLINTEND
    };

    struct BaseDescriptor {
    public:
        ItemTag mItemTag;

        BaseDescriptor() = delete;

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // ?clone@ComplexAliasDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
        virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const = 0;

        // vIndex: 1, symbol: ?sameItems@BaseDescriptor@ItemDescriptor@@UEBA_NAEBU12@_N@Z
        virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const&, bool) const;

        // vIndex: 2, symbol: ?sameItem@ComplexAliasDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
        virtual bool sameItem(struct ItemDescriptor::ItemEntry const&, bool) const = 0;

        // vIndex: 3, symbol:
        // ?getFullName@BaseDescriptor@ItemDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        virtual std::string const& getFullName() const;

        // vIndex: 4, symbol: ?getItem@BaseDescriptor@ItemDescriptor@@UEBA?AUItemEntry@2@XZ
        virtual struct ItemDescriptor::ItemEntry getItem() const;

        // vIndex: 5, symbol:
        // ?forEachItemUntil@BaseDescriptor@ItemDescriptor@@UEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
        virtual bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

        // vIndex: 6, symbol:
        // ?toMap@ComplexAliasDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
        virtual std::map<std::string, std::string> toMap() const = 0;

        // vIndex: 7, symbol: ?save@ComplexAliasDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
        virtual std::optional<class CompoundTag> save() const = 0;

        // vIndex: 8, symbol: ?serialize@BaseDescriptor@ItemDescriptor@@UEBAXAEAVValue@Json@@@Z
        virtual void serialize(class Json::Value& val) const;

        // vIndex: 9, symbol: ?serialize@ComplexAliasDescriptor@@UEBAXAEAVBinaryStream@@@Z
        virtual void serialize(class BinaryStream& stream) const = 0;

        // vIndex: 10, symbol: ?getType@ComplexAliasDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
        virtual ::ItemDescriptor::InternalType getType() const = 0;

        // vIndex: 11, symbol: ?isValid@BaseDescriptor@ItemDescriptor@@UEBA_NXZ
        virtual bool isValid() const;

        // vIndex: 12, symbol: ?getHash@ComplexAliasDescriptor@@UEBA_KXZ
        virtual uint64 getHash() const = 0;

        // vIndex: 13, symbol: ?shouldResolve@BaseDescriptor@ItemDescriptor@@UEBA_NXZ
        virtual bool shouldResolve() const;

        // vIndex: 14, symbol:
        // ?resolve@BaseDescriptor@ItemDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
        virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

        // vIndex: 15, symbol: ??1BaseDescriptor@ItemDescriptor@@UEAA@XZ
        virtual ~BaseDescriptor();

        // NOLINTEND
    };

    std::unique_ptr<ItemDescriptor::BaseDescriptor> mImpl;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemDescriptor@@UEAA@XZ
    virtual ~ItemDescriptor();

    // vIndex: 1, symbol: ?serialize@ItemDescriptor@@UEBAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value& val) const;

    // vIndex: 2, symbol: ?serialize@ItemDescriptor@@UEBAXAEAVBinaryStream@@@Z
    virtual void serialize(class BinaryStream& stream) const;

    // symbol: ??0ItemDescriptor@@QEAA@XZ
    MCAPI ItemDescriptor();

    // symbol: ??0ItemDescriptor@@QEAA@AEBVBlock@@@Z
    MCAPI explicit ItemDescriptor(class Block const& block);

    // symbol: ??0ItemDescriptor@@QEAA@AEBVBlockLegacy@@@Z
    MCAPI explicit ItemDescriptor(class BlockLegacy const& block);

    // symbol: ??0ItemDescriptor@@QEAA@$$QEAV0@@Z
    MCAPI ItemDescriptor(class ItemDescriptor&& rhs);

    // symbol: ??0ItemDescriptor@@QEAA@AEBV0@@Z
    MCAPI ItemDescriptor(class ItemDescriptor const& rhs);

    // symbol: ??0ItemDescriptor@@QEAA@AEAVReadOnlyBinaryStream@@@Z
    MCAPI explicit ItemDescriptor(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ItemDescriptor@@QEAA@AEBUItemTag@@@Z
    MCAPI explicit ItemDescriptor(struct ItemTag const&);

    // symbol: ??0ItemDescriptor@@QEAA@AEBU0Legacy@Puv@@@Z
    MCAPI explicit ItemDescriptor(struct Puv::Legacy::ItemDescriptor const&);

    // symbol: ??0ItemDescriptor@@QEAA@AEBVItem@@H@Z
    MCAPI ItemDescriptor(class Item const& item, int auxValue);

    // symbol: ??0ItemDescriptor@@QEAA@AEBVValue@Json@@AEBVSemVersion@@@Z
    MCAPI ItemDescriptor(class Json::Value const& val, class SemVersion const& engineVersion);

    // symbol: ??0ItemDescriptor@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
    MCAPI ItemDescriptor(std::string_view fullName, int itemAux);

    // symbol: ?forEachItemUntil@ItemDescriptor@@QEBA_NV?$function@$$A6A_NAEBVItem@@F@Z@std@@@Z
    MCAPI bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

    // symbol: ?getAuxValue@ItemDescriptor@@QEBAFXZ
    MCAPI short getAuxValue() const;

    // symbol: ?getBlock@ItemDescriptor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getBlock() const;

    // symbol: ?getFullName@ItemDescriptor@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getFullName() const;

    // symbol: ?getHash@ItemDescriptor@@QEBA_KXZ
    MCAPI uint64 getHash() const;

    // symbol: ?getId@ItemDescriptor@@QEBAFXZ
    MCAPI short getId() const;

    // symbol: ?getIdAux@ItemDescriptor@@QEBAHXZ
    MCAPI int getIdAux() const;

    // symbol: ?getItem@ItemDescriptor@@QEBAPEBVItem@@XZ
    MCAPI class Item const* getItem() const;

    // symbol: ?getLegacyBlock@ItemDescriptor@@QEBAAEBV?$WeakPtr@$$CBVBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy const> const& getLegacyBlock() const;

    // symbol: ?getRawNameId@ItemDescriptor@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getRawNameId() const;

    // symbol:
    // ?getSerializedNameAndAux@ItemDescriptor@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSerializedNameAndAux() const;

    // symbol: ?isDefinedAsItemName@ItemDescriptor@@QEBA_NXZ
    MCAPI bool isDefinedAsItemName() const;

    // symbol: ?isNull@ItemDescriptor@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ?isValid@ItemDescriptor@@QEBA_N_N@Z
    MCAPI bool isValid(bool) const;

    // symbol: ??4ItemDescriptor@@QEAAX$$QEAV0@@Z
    MCAPI void operator=(class ItemDescriptor&& rhs);

    // symbol: ??4ItemDescriptor@@QEAAXAEBV0@@Z
    MCAPI void operator=(class ItemDescriptor const& rhs);

    // symbol: ??8ItemDescriptor@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class ItemDescriptor const& rhs) const;

    // symbol: ?sameItem@ItemDescriptor@@QEBA_NAEBV1@_N@Z
    MCAPI bool sameItem(class ItemDescriptor const& otherItemDescriptor, bool) const;

    // symbol: ?sameItem@ItemDescriptor@@QEBA_NAEBVItemStack@@_N@Z
    MCAPI bool sameItem(class ItemStack const& item, bool) const;

    // symbol: ?save@ItemDescriptor@@QEBA?AV?$optional@VCompoundTag@@@std@@XZ
    MCAPI std::optional<class CompoundTag> save() const;

    // symbol: ?bindType@ItemDescriptor@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_resolve@ItemDescriptor@@AEBAXXZ
    MCAPI void _resolve() const;

    // symbol: ?toPuv@ItemDescriptor@@CA?AU1Legacy@Puv@@AEBV1@@Z
    MCAPI static struct Puv::Legacy::ItemDescriptor toPuv(class ItemDescriptor const&);

    // NOLINTEND
};
