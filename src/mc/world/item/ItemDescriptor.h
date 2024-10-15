#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/ItemTag.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

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
        MCAPI class Block const* getBlock() const;

        // NOLINTEND
    };

    struct BaseDescriptor {
    public:
        ItemTag mItemTag;

        BaseDescriptor() = delete;

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const = 0;

        // vIndex: 1
        virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        // vIndex: 2
        virtual bool sameItem(struct ItemDescriptor::ItemEntry const& otherItem, bool) const = 0;

        // vIndex: 3
        virtual std::string const& getFullName() const;

        // vIndex: 4
        virtual struct ItemDescriptor::ItemEntry getItem() const;

        // vIndex: 5
        virtual bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

        // vIndex: 6
        virtual std::map<std::string, std::string> toMap() const = 0;

        // vIndex: 7
        virtual std::optional<class CompoundTag> save() const = 0;

        // vIndex: 8
        virtual void serialize(class Json::Value& val) const;

        // vIndex: 9
        virtual void serialize(class BinaryStream& stream) const = 0;

        // vIndex: 10
        virtual ::ItemDescriptor::InternalType getType() const = 0;

        // vIndex: 11
        virtual bool isValid() const;

        // vIndex: 12
        virtual uint64 getHash() const = 0;

        // vIndex: 13
        virtual bool shouldResolve() const;

        // vIndex: 14
        virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;

        // vIndex: 15
        virtual ~BaseDescriptor();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void dtor$();

        MCAPI bool forEachItemUntil$(std::function<bool(class Item const&, short)> func) const;

        MCAPI std::string const& getFullName$() const;

        MCAPI struct ItemDescriptor::ItemEntry getItem$() const;

        MCAPI bool isValid$() const;

        MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve$() const;

        MCAPI bool sameItems$(struct ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        MCAPI void serialize$(class Json::Value& val) const;

        MCAPI bool shouldResolve$() const;

        // NOLINTEND
    };

    std::unique_ptr<ItemDescriptor::BaseDescriptor> mImpl;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemDescriptor();

    // vIndex: 1
    virtual void serialize(class Json::Value& val) const;

    // vIndex: 2
    virtual void serialize(class BinaryStream& stream) const;

    MCAPI ItemDescriptor();

    MCAPI explicit ItemDescriptor(class Block const& block);

    MCAPI explicit ItemDescriptor(class BlockLegacy const& block);

    MCAPI ItemDescriptor(class ItemDescriptor&& rhs);

    MCAPI ItemDescriptor(class ItemDescriptor const& rhs);

    MCAPI explicit ItemDescriptor(class ReadOnlyBinaryStream& stream);

    MCAPI explicit ItemDescriptor(struct ItemTag const& itemTag);

    MCAPI explicit ItemDescriptor(struct Puv::Legacy::ItemDescriptor const& desc);

    MCAPI ItemDescriptor(class Item const& item, int auxValue);

    MCAPI ItemDescriptor(class Json::Value const& val, class SemVersion const& engineVersion);

    MCAPI ItemDescriptor(std::string_view fullName, int itemAux);

    MCAPI bool forEachItemUntil(std::function<bool(class Item const&, short)> func) const;

    MCAPI short getAuxValue() const;

    MCAPI class Block const* getBlock() const;

    MCAPI std::string getFullName() const;

    MCAPI uint64 getHash() const;

    MCAPI short getId() const;

    MCAPI int getIdAux() const;

    MCAPI class Item const* getItem() const;

    MCAPI class WeakPtr<class BlockLegacy const> const& getLegacyBlock() const;

    MCAPI std::string getRawNameId() const;

    MCAPI std::string getSerializedNameAndAux() const;

    MCAPI bool isDefinedAsItemName() const;

    MCAPI bool isNull() const;

    MCAPI bool isValid(bool shouldResolve) const;

    MCAPI void operator=(class ItemDescriptor&& rhs);

    MCAPI void operator=(class ItemDescriptor const& rhs);

    MCAPI bool operator==(class ItemDescriptor const& rhs) const;

    MCAPI bool sameItem(class ItemDescriptor const& otherItemDescriptor, bool compareAux) const;

    MCAPI bool sameItem(class ItemStack const& item, bool compareAux) const;

    MCAPI std::optional<class CompoundTag> save() const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _resolve() const;

    MCAPI static struct Puv::Legacy::ItemDescriptor toPuv(class ItemDescriptor const& id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string_view fullName, int itemAux);

    MCAPI void* ctor$();

    MCAPI void* ctor$(class ReadOnlyBinaryStream& stream);

    MCAPI void* ctor$(struct Puv::Legacy::ItemDescriptor const& desc);

    MCAPI void* ctor$(struct ItemTag const& itemTag);

    MCAPI void* ctor$(class Item const& item, int auxValue);

    MCAPI void* ctor$(class BlockLegacy const& block);

    MCAPI void* ctor$(class ItemDescriptor&& rhs);

    MCAPI void* ctor$(class ItemDescriptor const& rhs);

    MCAPI void* ctor$(class Json::Value const& val, class SemVersion const& engineVersion);

    MCAPI void* ctor$(class Block const& block);

    MCAPI void dtor$();

    MCAPI void serialize$(class Json::Value& val) const;

    MCAPI void serialize$(class BinaryStream& stream) const;

    // NOLINTEND
};
