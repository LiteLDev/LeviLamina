#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerEnumMapping; }
// clang-format on

namespace CerealHelpers {

struct Member {
public:
    // Member inner types define
    enum class Type {};

public:
    // prevent constructor by default
    Member& operator=(Member const&);
    Member(Member const&);
    Member();

public:
    // NOLINTBEGIN
    MCAPI Member(std::string_view name, class cereal::SerializerEnumMapping enumMapping, bool required);

    MCAPI Member(
        std::string_view              name,
        ::CerealHelpers::Member::Type type,
        bool                          required,
        std::optional<float>          min,
        std::optional<float>          max
    );

    MCAPI bool
    check(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
              value) const;

    MCAPI ~Member();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool doCheck(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            value
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CerealHelpers
