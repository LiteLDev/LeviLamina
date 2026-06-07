#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class ListTag : public ::Tag {
public:
    // ListTag inner types define
    using List = ::std::vector<::std::unique_ptr<::Tag>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Tag>>> mList;
    ::ll::TypedStorage<1, 1, ::Tag::Type>                              mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ListTag& operator=(ListTag const&);
    ListTag(ListTag const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual bool equals(::Tag const& rhs) const /*override*/;

    virtual void deleteChildren() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ListTag();

    MCAPI void add(::std::unique_ptr<::Tag> tag);

    MCAPI ::std::unique_ptr<::ListTag> copyList() const;

    MCAPI void forEachCompoundTag(::brstd::function_ref<void(::CompoundTag const&)> func) const;

    MCAPI void forEachTag(::brstd::function_ref<void(::Tag const&)> func) const;

    MCAPI ::Tag* get(int index) const;

    MCAPI uchar getByte(int index) const;

    MCFOLD ::CompoundTag const* getCompound(uint64 index) const;

    MCFOLD ::CompoundTag* getCompound(uint64 index);

    MCAPI double getDouble(int index) const;

    MCAPI float getFloat(int index) const;

    MCAPI int getInt(int index) const;

    MCAPI int64 getInt64(int index) const;

    MCAPI ::std::string const& getString(int index) const;

    MCFOLD ::Tag::Type getType() const;

    MCAPI ::ListTag& operator=(::ListTag&&);

    MCAPI int size() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI void $print(::std::string const& prefix_, ::PrintStream& out) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;

    MCAPI bool $equals(::Tag const& rhs) const;

    MCFOLD void $deleteChildren();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
