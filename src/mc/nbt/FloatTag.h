#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class FloatTag : public ::Tag {
public:
    float data;

    constexpr FloatTag& operator=(float value) noexcept {
        data = value;
        return *this;
    }

    constexpr operator float() const noexcept { return data; }

    [[nodiscard]] constexpr explicit FloatTag(float value = 0) noexcept : data(value) {}

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FloatTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::Float; }

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(float data);

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class Tag> copy$() const;

    MCAPI bool equals$(class Tag const& rhs) const;

    MCAPI ::Tag::Type getId$() const;

    MCAPI uint64 hash$() const;

    MCAPI class Bedrock::Result<void> load$(class IDataInput& dis);

    MCAPI std::string toString$() const;

    MCAPI void write$(class IDataOutput& dos) const;

    // NOLINTEND
};
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline FloatTag operator""_f(ldouble num) noexcept { return FloatTag{(float)num}; }
} // namespace ll::inline literals::inline nbt_literals
