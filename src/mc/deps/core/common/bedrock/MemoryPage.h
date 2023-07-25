#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
// clang-format on

namespace Bedrock::JSONObject {

class MemoryPage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_MEMORYPAGE
public:
    MemoryPage& operator=(MemoryPage const&) = delete;
    MemoryPage(MemoryPage const&)            = delete;
    MemoryPage()                             = delete;
#endif

public:
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
    MCAPI void* allocateBack(unsigned __int64, unsigned __int64);
    /**
     * @symbol ?allocateFront\@MemoryPage\@JSONObject\@Bedrock\@\@QEAAPEAX_K0\@Z
     */
    MCAPI void* allocateFront(unsigned __int64, unsigned __int64);

    // private:
    /**
     * @symbol ?_allocate\@MemoryPage\@JSONObject\@Bedrock\@\@AEAAPEAXP8123\@EAA_K_K0\@ZP8123\@EAAPEAX00\@Z00\@Z
     */
    MCAPI void* _allocate(
        unsigned __int64 (Bedrock::JSONObject::MemoryPage::*)(unsigned __int64, unsigned __int64),
        void* (Bedrock::JSONObject::MemoryPage::*)(unsigned __int64, unsigned __int64),
        unsigned __int64,
        unsigned __int64
    );
    /**
     * @symbol ?_tryAllocateBack\@MemoryPage\@JSONObject\@Bedrock\@\@AEAA_K_K0\@Z
     */
    MCAPI unsigned __int64 _tryAllocateBack(unsigned __int64, unsigned __int64);
    /**
     * @symbol ?_tryAllocateFront\@MemoryPage\@JSONObject\@Bedrock\@\@AEAA_K_K0\@Z
     */
    MCAPI unsigned __int64 _tryAllocateFront(unsigned __int64, unsigned __int64);

private:
};

}; // namespace Bedrock::JSONObject
