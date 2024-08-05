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
    MCAPI Member(std::string_view, class cereal::SerializerEnumMapping, bool);

    MCAPI Member(std::string_view, ::CerealHelpers::Member::Type, bool, std::optional<float>, std::optional<float>);

    MCAPI bool check(rapidjson::GenericValue<
                     rapidjson::UTF8<char>,
                     rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    MCAPI ~Member();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool doCheck(rapidjson::GenericValue<
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // NOLINTEND
};

}; // namespace CerealHelpers
