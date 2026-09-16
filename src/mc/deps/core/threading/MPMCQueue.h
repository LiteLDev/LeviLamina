#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/memory/MoodyCamelBedrockMemoryTraits.h"

template <typename T0>
class MPMCQueue {
public:
    // Held untyped so that MPMCQueue<T> stays usable with an incomplete T, which several headers
    // rely on. The 616 bytes and 8-byte alignment come from the moodycamel queue it wraps.
    ::ll::UntypedStorage<8, 616> mQueue;

public:
    /// @brief Restored: the game inlines moodycamel's producer lookup into this, which is why the
    ///        call site reaches `get_or_add_implicit_producer` directly.
    bool enqueue(T0 const& element) {
        return mQueue.as<::moodycamel::ConcurrentQueue<T0, ::Bedrock::Memory::MoodyCamelBedrockMemoryTraits>>().enqueue(
            element
        );
    }
};
