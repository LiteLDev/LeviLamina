#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::internal { class PacketMaskTable; }
// clang-format on

namespace webrtc::internal {
// functions
// NOLINTBEGIN
MCAPI void CopyColumn(uchar*, int, uchar*, int, int, int, int);

MCAPI void GeneratePacketMasks(int, int, int, bool, ::webrtc::internal::PacketMaskTable*, uchar*);

MCAPI void ImportantPacketProtection(int, int, int, uchar*, ::webrtc::internal::PacketMaskTable*);

MCAPI void InsertZeroColumns(int, uchar*, int, int, int);

MCAPI ::rtc::ArrayView<uchar const> LookUpInFecTable(uchar const*, int, int);

MCAPI uint64 PacketMaskSize(uint64);

MCAPI int SetProtectionAllocation(int, int, int);

MCAPI void UnequalProtectionMask(int, int, int, int, uchar*, ::webrtc::internal::PacketMaskTable*);
// NOLINTEND

} // namespace webrtc::internal
