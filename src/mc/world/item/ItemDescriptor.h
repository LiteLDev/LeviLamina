#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Block;
class BlockLegacy;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
struct ItemTag;
namespace Json { class Value; }
namespace SharedTypes::Legacy { struct ItemDescriptor; }
// clang-format on

class ItemDescriptor {
public:
    // ItemDescriptor inner types declare
    // clang-format off
    struct BaseDescriptor;
    struct ItemEntry;
    // clang-format on

    // ItemDescriptor inner types define
    struct ItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Item const*> mItem;
        ::ll::TypedStorage<2, 2, short>         mAuxValue;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Block const* getBlock() const;
        // NOLINTEND
    };

    enum class InternalType : uchar {
        Invalid      = 0,
        Default      = 1,
        Molang       = 2,
        ItemTag      = 3,
        Deferred     = 4,
        ComplexAlias = 5,
    };

    struct BaseDescriptor {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const = 0;

        // vIndex: 1
        virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        // vIndex: 2
        virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const = 0;

        // vIndex: 3
        virtual ::std::string getFullName() const;

        // vIndex: 4
        virtual ::std::string toString() const;

        // vIndex: 5
        virtual ::ItemDescriptor::ItemEntry getItem() const;

        // vIndex: 6
        virtual bool forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

        // vIndex: 7
        virtual ::std::map<::std::string, ::std::string> toMap() const = 0;

        // vIndex: 8
        virtual ::std::optional<::CompoundTag> save() const = 0;

        // vIndex: 10
        virtual void serialize(::Json::Value& val) const;

        // vIndex: 9
        virtual void serialize(::BinaryStream&) const = 0;

        // vIndex: 11
        virtual ::ItemDescriptor::InternalType getType() const = 0;

        // vIndex: 12
        virtual bool isValid() const;

        // vIndex: 13
        virtual uint64 getHash() const = 0;

        // vIndex: 14
        virtual bool shouldResolve() const;

        // vIndex: 15
        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const;

        // vIndex: 16
        virtual ~BaseDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        MCNAPI ::std::string $getFullName() const;

        MCNAPI ::std::string $toString() const;

        MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

        MCNAPI bool $forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

        MCNAPI void $serialize(::Json::Value& val) const;

        MCNAPI bool $isValid() const;

        MCNAPI bool $shouldResolve() const;

        MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescriptor(ItemDescriptor const&);
    ItemDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemDescriptor();

    // vIndex: 2
    virtual void serialize(::Json::Value& val) const;

    // vIndex: 1
    virtual void serialize(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemDescriptor(::Block const& block);

    MCAPI explicit ItemDescriptor(::BlockLegacy const& block);

    MCAPI explicit ItemDescriptor(::ItemTag const& itemTag);

    MCAPI explicit ItemDescriptor(::ReadOnlyBinaryStream& stream);

    MCAPI ItemDescriptor(::std::string_view fullName, int itemAux);

    MCAPI ItemDescriptor(::Item const& item, int auxValue);

    MCAPI ItemDescriptor(::Json::Value const& val, ::MolangVersion molangVersion);

    MCAPI void _resolve() const;

    MCAPI bool forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

    MCAPI short getAuxValue() const;

    MCAPI ::Block const* getBlock() const;

    MCAPI ::std::string getFullName() const;

    MCAPI short getId() const;

    MCAPI int getIdAux() const;

    MCAPI ::Item const* getItem() const;

    MCAPI ::WeakPtr<::BlockLegacy const> const& getLegacyBlock() const;

    MCAPI ::std::string getRawNameId() const;

    MCAPI ::std::string getSerializedNameAndAux() const;

    MCAPI bool isNull() const;

    MCAPI bool isValid(bool shouldResolve) const;

    MCAPI void operator=(::ItemDescriptor const& rhs);

    MCAPI void operator=(::ItemDescriptor&& rhs);

    MCAPI bool sameItem(::ItemDescriptor const& otherItemDescriptor, bool compareAux) const;

    MCAPI ::std::optional<::CompoundTag> save() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::ItemDescriptor> fromTag(::CompoundTag const* tag);

    MCAPI static ::SharedTypes::Legacy::ItemDescriptor toSharedTypes(::ItemDescriptor const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Block const& block);

    MCAPI void* $ctor(::BlockLegacy const& block);

    MCAPI void* $ctor(::ItemTag const& itemTag);

    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);

    MCAPI void* $ctor(::std::string_view fullName, int itemAux);

    MCAPI void* $ctor(::Item const& item, int auxValue);

    MCAPI void* $ctor(::Json::Value const& val, ::MolangVersion molangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serialize(::Json::Value& val) const;

    MCAPI void $serialize(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
