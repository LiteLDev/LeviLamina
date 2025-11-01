#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

class IDataOutput;
class IDataInput;
class PrintStream;

enum class SnbtFormat : uint {
    Minimize           = 0,
    CompoundLineFeed   = 1 << 0,
    ArrayLineFeed      = 1 << 1,
    Colored            = 1 << 2,
    Console            = 1 << 3,
    ForceAscii         = 1 << 4,
    ForceQuote         = 1 << 5,
    CommentMarks       = 1 << 6,
    Jsonify            = ForceQuote | CommentMarks,
    PartialLineFeed    = CompoundLineFeed,
    AlwaysLineFeed     = CompoundLineFeed | ArrayLineFeed,
    PrettyFilePrint    = PartialLineFeed,
    PrettyChatPrint    = PrettyFilePrint | Colored,
    PrettyConsolePrint = PrettyFilePrint | Colored | Console,
};
[[nodiscard]] constexpr SnbtFormat operator|(const SnbtFormat l, const SnbtFormat r) noexcept {
    return static_cast<SnbtFormat>(
        static_cast<std::underlying_type_t<SnbtFormat>>(l) | static_cast<std::underlying_type_t<SnbtFormat>>(r)
    );
}
[[nodiscard]] constexpr SnbtFormat operator&(const SnbtFormat l, const SnbtFormat r) noexcept {
    return static_cast<SnbtFormat>(
        static_cast<std::underlying_type_t<SnbtFormat>>(l) & static_cast<std::underlying_type_t<SnbtFormat>>(r)
    );
}

class Tag {
protected:
    constexpr Tag() = default;

public:
    // Tag inner types define
    enum class Type : uchar {
        End       = 0x0,
        Byte      = 0x1,
        Short     = 0x2,
        Int       = 0x3,
        Int64     = 0x4,
        Float     = 0x5,
        Double    = 0x6,
        ByteArray   = 0x7,
        String    = 0x8,
        List      = 0x9,
        Compound  = 0xA,
        IntArray  = 0xB,
    };
using enum Type;

    template <std::derived_from<Tag> T>
    T const* as_ptr() const {
        return static_cast<T const*>(this);
    }
    template <std::derived_from<Tag> T>
    T* as_ptr() {
        return static_cast<T*>(this);
    }
    template <std::derived_from<Tag> T>
    T const& as() const {
        return *static_cast<T const*>(this);
    }
    template <std::derived_from<Tag> T>
    T& as() {
        return *static_cast<T*>(this);
    }

    [[nodiscard]] bool operator==(Tag const& other) const { return equals(other); }

    LLNDAPI std::string toSnbt(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const noexcept;
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Tag() = default;

    // vIndex: 1
    virtual void deleteChildren();

    // vIndex: 2
    virtual void write(::IDataOutput&) const = 0;

    // vIndex: 3
    virtual ::Bedrock::Result<void> load(::IDataInput&) = 0;

    // vIndex: 4
    virtual ::std::string toString() const = 0;

    // vIndex: 5
    virtual ::Tag::Type getId() const = 0;

    // vIndex: 6
    virtual bool equals(::Tag const& rhs) const;

    // vIndex: 8
    virtual void print(::PrintStream& out) const;

    // vIndex: 7
    virtual void print(::std::string const& prefix, ::PrintStream& out) const;

    // vIndex: 9
    virtual ::std::unique_ptr<::Tag> copy() const = 0;

    // vIndex: 10
    virtual uint64 hash() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getTagName(::Tag::Type type);

    MCAPI static ::Bedrock::Result<::std::unique_ptr<::Tag>> newTag(::Tag::Type type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NullString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $deleteChildren();

    MCFOLD bool $equals(::Tag const& rhs) const;

    MCAPI void $print(::PrintStream& out) const;

    MCAPI void $print(::std::string const& prefix, ::PrintStream& out) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
