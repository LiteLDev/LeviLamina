#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct CodecBufferUsage; }
// clang-format on

namespace webrtc {

class FrameDependenciesCalculator {
public:
    // FrameDependenciesCalculator inner types declare
    // clang-format off
    struct BufferUsage;
    // clang-format on
    
    // FrameDependenciesCalculator inner types define
    struct BufferUsage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7496c9;
        ::ll::UntypedStorage<8, 40> mUnka7cc4d;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        BufferUsage& operator=(BufferUsage const&);
        BufferUsage(BufferUsage const&);
        BufferUsage();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mUnk70a183;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameDependenciesCalculator& operator=(FrameDependenciesCalculator const&);
    FrameDependenciesCalculator(FrameDependenciesCalculator const&);
    FrameDependenciesCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::absl::InlinedVector<int64, 5, ::std::allocator<int64>> FromBuffersUsage(int64 frame_id, ::rtc::ArrayView<::webrtc::CodecBufferUsage const> buffers_usage);

    MCNAPI ~FrameDependenciesCalculator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
