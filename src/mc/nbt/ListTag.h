#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

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
    ListTag();

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

    virtual ~ListTag() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void add(::std::unique_ptr<::Tag> tag);

    MCAPI ::std::unique_ptr<::ListTag> copyList() const;

    MCAPI void forEachCompoundTag(::std::function<void(::CompoundTag const&)> func) const;

    MCAPI ::Tag* get(int index) const;

    MCAPI float getFloat(int index) const;

    MCAPI ::ListTag& operator=(::ListTag&&);

    MCFOLD int size() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCAPI void $deleteChildren();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
