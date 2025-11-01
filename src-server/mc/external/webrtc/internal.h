#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::internal { class PacketMaskTable; }
// clang-format on

namespace webrtc::internal {
// functions
// NOLINTBEGIN
MCNAPI void CopyColumn(uchar* new_mask, int new_mask_bytes, uchar* old_mask, int old_mask_bytes, int num_fec_packets, int new_bit_index, int old_bit_index);

MCNAPI void GeneratePacketMasks(int num_media_packets, int num_fec_packets, int num_imp_packets, bool use_unequal_protection, ::webrtc::internal::PacketMaskTable* mask_table, uchar* packet_mask);

MCNAPI void ImportantPacketProtection(int num_fec_for_imp_packets, int num_imp_packets, int num_mask_bytes, uchar* packet_mask, ::webrtc::internal::PacketMaskTable* mask_table);

MCNAPI void InsertZeroColumns(int num_zeros, uchar* new_mask, int new_mask_bytes, int num_fec_packets, int new_bit_index);

MCNAPI ::rtc::ArrayView<uchar const> LookUpInFecTable(uchar const* table, int media_packet_index, int fec_index);

MCNAPI uint64 PacketMaskSize(uint64 num_sequence_numbers);

MCNAPI int SetProtectionAllocation(int num_media_packets, int num_fec_packets, int num_imp_packets);

MCNAPI void UnequalProtectionMask(int num_media_packets, int num_fec_packets, int num_imp_packets, int num_mask_bytes, uchar* packet_mask, ::webrtc::internal::PacketMaskTable* mask_table);
// NOLINTEND

}
