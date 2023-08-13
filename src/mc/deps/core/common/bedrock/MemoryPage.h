#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
// clang-format on

namespace Bedrock::JSONObject {

class MemoryPage {

public:
    // prevent constructor by default
    MemoryPage& operator=(MemoryPage const&) = delete;
    MemoryPage(MemoryPage const&)            = delete;
    MemoryPage()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0MemoryPage\@JSONObject\@Bedrock\@\@QEAA\@V?$not_null\@PEAVDocument\@JSONObject\@Bedrock\@\@\@gsl\@\@PEAV012\@II\@Z
     */
    MCAPI MemoryPage(
        class gsl::not_null<class Bedrock::JSONObject::Document*>,
        class Bedrock::JSONObject::MemoryPage*,
        unsigned int,
        unsigned int
    );
    /**
     * @symbol ?allocateBack\@MemoryPage\@JSONObject\@Bedrock\@\@QEAAPEAX_K0\@Z
     */
    MCAPI void* allocateBack(uint64_t, uint64_t);
    /**
     * @symbol ?allocateFront\@MemoryPage\@JSONObject\@Bedrock\@\@QEAAPEAX_K0\@Z
     */
    MCAPI void* allocateFront(uint64_t, uint64_t);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_allocate\@MemoryPage\@JSONObject\@Bedrock\@\@AEAAPEAXP8123\@EAA_K_K0\@ZP8123\@EAAPEAX00\@Z00\@Z
     */
    MCAPI void* _allocate(
        uint64_t (__cdecl Bedrock::JSONObject::MemoryPage::*)(uint64_t, uint64_t),
        void* (__cdecl Bedrock::JSONObject::MemoryPage::*)(uint64_t, uint64_t),
        uint64_t,
        uint64_t
    );
    /**
     * @symbol ?_tryAllocateBack\@MemoryPage\@JSONObject\@Bedrock\@\@AEAA_K_K0\@Z
     */
    MCAPI uint64_t _tryAllocateBack(uint64_t, uint64_t);
    /**
     * @symbol ?_tryAllocateFront\@MemoryPage\@JSONObject\@Bedrock\@\@AEAA_K_K0\@Z
     */
    MCAPI uint64_t _tryAllocateFront(uint64_t, uint64_t);
    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
