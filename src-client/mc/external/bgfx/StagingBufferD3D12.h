#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Enum.h"

namespace bgfx::d3d12 {

class StagingBufferD3D12 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ID3D12Resource*>                 m_upload;
    ::ll::TypedStorage<8, 8, uint64>                            m_gpuVA;
    ::ll::TypedStorage<8, 8, uchar*>                            m_data;
    ::ll::TypedStorage<4, 4, uint>                              m_size;
    ::ll::TypedStorage<4, 4, ::bgfx::d3d12::HeapProperty::Enum> m_properties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getData(uint64& _gpuAddress, void*& _cpuAddress, uint _offset);
    // NOLINTEND
};

} // namespace bgfx::d3d12
