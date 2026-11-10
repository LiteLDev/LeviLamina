#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Block;
class BlockType;
class CompoundTag;
class Item;
class ItemInstance;
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
    };

    struct BaseDescriptor {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> clone() const = 0;

        virtual bool sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        virtual bool sameItem(::ItemDescriptor::ItemEntry const& otherItem, bool compareAux) const = 0;

        virtual ::std::string getFullName() const;

        virtual ::std::string toString() const;

        virtual ::std::string getNameAndAux() const;

        virtual ::ItemDescriptor::ItemEntry getItem() const;

        virtual bool forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;

        virtual ::std::map<::std::string, ::std::string> toMap() const = 0;

        virtual ::std::optional<::CompoundTag> save() const = 0;

        virtual void serialize(::Json::Value& val) const;

        virtual void serialize(::BinaryStream& stream) const = 0;

        virtual ::ItemDescriptor::InternalType getType() const = 0;

        virtual bool isValid() const;

        virtual uint64 getHash() const = 0;

        virtual bool shouldResolve() const;

        virtual ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> resolve() const;

        virtual ~BaseDescriptor() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $sameItems(::ItemDescriptor::BaseDescriptor const& otherDescriptor, bool compareAux) const;

        MCNAPI ::std::string $toString() const;

        MCNAPI ::std::string $getNameAndAux() const;

        MCNAPI ::ItemDescriptor::ItemEntry $getItem() const;

        MCNAPI bool $forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;

        MCNAPI void $serialize(::Json::Value& val) const;

        MCNAPI bool $isValid() const;

        MCNAPI bool $shouldResolve() const;

        MCNAPI ::std::unique_ptr<::ItemDescriptor::BaseDescriptor> $resolve() const;


        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemDescriptor::BaseDescriptor>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescriptor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemDescriptor() = default;

    virtual void serialize(::Json::Value& val) const;

    virtual void serialize(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemDescriptor(::Block const& block);

    MCNAPI explicit ItemDescriptor(::BlockType const& block);

    MCAPI explicit ItemDescriptor(::ItemTag const& itemTag);

    MCNAPI explicit ItemDescriptor(::ReadOnlyBinaryStream& stream);

    MCAPI ItemDescriptor(::std::string_view fullName, int itemAux);

    MCAPI ItemDescriptor(::Item const& item, int auxValue);

    MCNAPI ItemDescriptor(::Json::Value const& val, ::MolangVersion molangVersion);

    MCAPI bool forEachItemUntil(::brstd::function_ref<bool(::Item const&, short)> func) const;

    MCAPI short getAuxValue() const;

    MCAPI ::Block const* getBlock() const;

    MCAPI ::BlockType const* getBlockType() const;

    MCAPI int getIdAux() const;

    MCAPI ::Item const* getItem() const;

    MCAPI ::std::string getRawNameId() const;

    MCAPI ::std::string getSerializedNameAndAux(bool removeInvalidAux) const;

    MCAPI bool isNull() const;

    MCAPI bool isValid(bool shouldResolve) const;

    MCNAPI explicit operator ::ItemInstance() const;

    MCAPI bool sameItem(::ItemDescriptor const& otherItemDescriptor, bool compareAux) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void fromSharedTypes(::ItemDescriptor& instance, ::SharedTypes::Legacy::ItemDescriptor const& desc);

    MCAPI static ::std::optional<::ItemDescriptor> fromTag(::CompoundTag const* tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Block const& block);

    MCNAPI void* $ctor(::BlockType const& block);

    MCAPI void* $ctor(::ItemTag const& itemTag);

    MCNAPI void* $ctor(::ReadOnlyBinaryStream& stream);

    MCAPI void* $ctor(::std::string_view fullName, int itemAux);

    MCAPI void* $ctor(::Item const& item, int auxValue);

    MCNAPI void* $ctor(::Json::Value const& val, ::MolangVersion molangVersion);
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
