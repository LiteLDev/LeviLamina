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
    // symbol:
    // ??0Member@CerealHelpers@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@VSerializerEnumMapping@cereal@@_N@Z
    MCAPI Member(std::string_view, class cereal::SerializerEnumMapping, bool);

    // symbol:
    // ??0Member@CerealHelpers@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Type@01@_NV?$optional@M@3@3@Z
    MCAPI Member(std::string_view, ::CerealHelpers::Member::Type, bool, std::optional<float>, std::optional<float>);

    // symbol:
    // ?check@Member@CerealHelpers@@QEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    MCAPI bool check(rapidjson::GenericValue<
                     rapidjson::UTF8<char>,
                     rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // symbol: ??1Member@CerealHelpers@@QEAA@XZ
    MCAPI ~Member();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?doCheck@Member@CerealHelpers@@AEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    MCAPI bool doCheck(rapidjson::GenericValue<
                       rapidjson::UTF8<char>,
                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // NOLINTEND
};

}; // namespace CerealHelpers
