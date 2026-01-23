#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundTagVariant;
class IDataInput;
class IDataOutput;
class Int64Tag;
class IntTag;
class ListTag;
class PrintStream;
class ShortTag;
class StringTag;
// clang-format on

class CompoundTag : public ::Tag {
public:
    // CompoundTag inner types define
    using StringView = ::std::string_view;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::CompoundTagVariant, ::std::less<void>>> mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTag& operator=(CompoundTag const&);
    CompoundTag(CompoundTag const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundTag() /*override*/;

    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual void print(::std::string const& prefix, ::PrintStream& out) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual bool equals(::Tag const& obj) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundTag();

    MCAPI CompoundTag(::CompoundTag&& rhs);

    MCAPI void append(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> clone() const;

    MCAPI bool contains(::std::string_view name) const;

    MCAPI bool contains(::std::string_view name, ::Tag::Type type) const;

    MCAPI void deepCopy(::CompoundTag const& other);

    MCAPI ::Tag const* get(::std::string_view name) const;

    MCAPI_C ::Tag* get(::std::string_view name);

    MCAPI bool getBoolean(::std::string_view string) const;

    MCAPI uchar getByte(::std::string_view name) const;

    MCAPI ::std::vector<uchar> const& getByteArray(::std::string_view name) const;

    MCAPI ::CompoundTag const* getCompound(::std::string_view) const;

    MCFOLD ::CompoundTag* getCompound(::std::string_view name);

    MCAPI float getFloat(::std::string_view name) const;

    MCAPI int getInt(::std::string_view name) const;

    MCAPI ::Int64Tag const* getInt64Tag(::std::string_view) const;

    MCFOLD ::Int64Tag* getInt64Tag(::std::string_view name);

    MCAPI ::IntTag const* getIntTag(::std::string_view name) const;

    MCAPI ::ListTag const* getList(::std::string_view) const;

    MCFOLD ::ListTag* getList(::std::string_view name);

    MCAPI ::ShortTag const* getShortTag(::std::string_view name) const;

    MCAPI ::std::string const& getString(::std::string_view name) const;

    MCAPI ::StringTag const* getStringTag(::std::string_view name) const;

    MCFOLD ::CompoundTag& operator=(::CompoundTag&& rhs);

    MCAPI ::Tag& put(::std::string name, ::Tag&& tag);

    MCAPI ::Tag* put(::std::string name, ::std::unique_ptr<::Tag> tag);

    MCAPI void putBoolean(::std::string name, bool val);

    MCAPI uchar& putByte(::std::string name, uchar value);

    MCAPI ::std::vector<uchar>& putByteArray(::std::string name, ::std::vector<uchar> mem);

    MCAPI ::CompoundTag& putCompound(::std::string name, ::CompoundTag value);

    MCAPI ::CompoundTag* putCompound(::std::string name, ::std::unique_ptr<::CompoundTag> value);

    MCAPI float& putFloat(::std::string name, float value);

    MCAPI int& putInt(::std::string name, int value);

    MCAPI int64& putInt64(::std::string name, int64 value);

    MCAPI short& putShort(::std::string name, short value);

    MCAPI ::std::string& putString(::std::string name, ::std::string value);

    MCAPI bool remove(::std::string_view name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CompoundTag&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI void $print(::std::string const& prefix, ::PrintStream& out) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;

    MCAPI bool $equals(::Tag const& obj) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
