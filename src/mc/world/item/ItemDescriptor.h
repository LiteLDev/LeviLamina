#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Block;
class BlockType;
class CompoundTag;
class Item;
class ReadOnlyBinaryStream;
struct ItemTag;
namespace Json { class Value; }
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemDescriptor {
public:
    // ItemDescriptor inner types declare
    // clang-format off
    struct ItemEntry;
    struct BaseDescriptor;
    // clang-format on

    // ItemDescriptor inner types define
    enum class InternalType : uchar {
        Invalid      = 0,
        Default      = 1,
        Molang       = 2,
        ItemTag      = 3,
        Deferred     = 4,
        ComplexAlias = 5,
    };

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
        MCAPI ::Block const* getBlock() const;
        // NOLINTEND
    };

    struct BaseDescriptor {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const = 0;

        virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        virtual bool sameItem(::ItemDescriptor::ItemEntry const&, bool) const = 0;

        virtual ::std::string getFullName() const;

        virtual ::std::string toString() const;

        virtual ::ItemDescriptor::ItemEntry getItem() const;

        virtual bool forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

        virtual ::std::map<::std::string, ::std::string> toMap() const = 0;

        virtual ::std::optional<::CompoundTag> save() const = 0;

        virtual void serialize(::Json::Value& val) const;

        virtual void serialize(::BinaryStream&) const = 0;

        virtual ::ItemDescriptor::InternalType getType() const = 0;

        virtual bool isValid() const;

        virtual uint64 getHash() const = 0;

        virtual bool shouldResolve() const;

        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const;

        virtual ~BaseDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        MCFOLD ::std::string $getFullName() const;

        MCAPI ::std::string $toString() const;

        MCFOLD ::ItemDescriptor::ItemEntry $getItem() const;

        MCAPI bool $forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

        MCAPI void $serialize(::Json::Value& val) const;

        MCFOLD bool $isValid() const;

        MCFOLD bool $shouldResolve() const;

        MCFOLD ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;


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
    virtual ~ItemDescriptor();

    virtual void serialize(::Json::Value& val) const;

    virtual void serialize(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemDescriptor(::Block const& block);

    MCAPI explicit ItemDescriptor(::BlockType const& block);

    MCAPI explicit ItemDescriptor(::ItemTag const& itemTag);

    MCAPI explicit ItemDescriptor(::ReadOnlyBinaryStream& stream);

    MCAPI ItemDescriptor(::std::string_view fullName, int itemAux);

    MCAPI ItemDescriptor(::Item const& item, int auxValue);

    MCAPI ItemDescriptor(::Json::Value const& val, ::MolangVersion molangVersion);

    MCAPI void _resolve() const;

    MCAPI bool forEachItemUntil(::std::function<bool(::Item const&, short)> func) const;

    MCAPI short getAuxValue() const;

    MCAPI ::Block const* getBlock() const;

    MCAPI ::WeakPtr<::BlockType const> const& getBlockType() const;

    MCAPI ::std::string getFullName() const;

    MCAPI short getId() const;

    MCAPI int getIdAux() const;

    MCAPI ::Item const* getItem() const;

    MCAPI ::std::string getRawNameId() const;

    MCAPI ::std::string getSerializedNameAndAux() const;

    MCAPI bool isNull() const;

    MCAPI bool isValid(bool shouldResolve) const;

    MCAPI void operator=(::ItemDescriptor&& rhs);

    MCAPI void operator=(::ItemDescriptor const& rhs);

    MCAPI bool sameItem(::ItemDescriptor const& otherItemDescriptor, bool compareAux) const;

    MCAPI ::std::optional<::CompoundTag> save() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void fromSharedTypes(::ItemDescriptor& instance, ::SharedTypes::Legacy::ItemDescriptor const& desc);

    MCAPI static ::std::optional<::ItemDescriptor> fromTag(::CompoundTag const* tag);

    MCAPI static ::SharedTypes::Legacy::ItemDescriptor toSharedTypes(::ItemDescriptor const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Block const& block);

    MCAPI void* $ctor(::BlockType const& block);

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
