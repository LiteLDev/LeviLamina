#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::internal { class PacketMaskTable; }
// clang-format on

namespace webrtc::internal {
// functions
// NOLINTBEGIN
MCNAPI void CopyColumn(uchar*, int, uchar*, int, int, int, int);

MCNAPI void GeneratePacketMasks(int, int, int, bool, ::webrtc::internal::PacketMaskTable*, uchar*);

MCNAPI void ImportantPacketProtection(int, int, int, uchar*, ::webrtc::internal::PacketMaskTable*);

MCNAPI void InsertZeroColumns(int, uchar*, int, int, int);

MCNAPI ::rtc::ArrayView<uchar const> LookUpInFecTable(uchar const*, int, int);

MCNAPI uint64 PacketMaskSize(uint64);

MCNAPI int SetProtectionAllocation(int, int, int);

MCNAPI void UnequalProtectionMask(int, int, int, int, uchar*, ::webrtc::internal::PacketMaskTable*);
// NOLINTEND

} // namespace webrtc::internal
