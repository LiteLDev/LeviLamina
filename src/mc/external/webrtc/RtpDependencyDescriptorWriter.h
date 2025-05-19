#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct DependencyDescriptor; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct FrameDependencyTemplate; }
// clang-format on

namespace webrtc {

struct RtpDependencyDescriptorWriter {
public:
    // RtpDependencyDescriptorWriter inner types declare
    // clang-format off
    struct TemplateMatch;
    // clang-format on

    // RtpDependencyDescriptorWriter inner types define
    struct TemplateMatch {};

public:
    // prevent constructor by default
    RtpDependencyDescriptorWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RtpDependencyDescriptorWriter::TemplateMatch CalculateMatch(
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::webrtc::FrameDependencyTemplate>>>
    ) const;

    MCNAPI void FindBestTemplate();

    MCNAPI bool HasExtendedFields() const;

    MCNAPI RtpDependencyDescriptorWriter(
        ::rtc::ArrayView<uchar>,
        ::webrtc::FrameDependencyStructure const&,
        ::std::bitset<32>,
        ::webrtc::DependencyDescriptor const&
    );

    MCNAPI bool ShouldWriteActiveDecodeTargetsBitmask() const;

    MCNAPI int StructureSizeBits() const;

    MCNAPI uint64 TemplateId() const;

    MCNAPI int ValueSizeBits() const;

    MCNAPI bool Write();

    MCNAPI void WriteBits(uint64, uint64);

    MCNAPI void WriteExtendedFields();

    MCNAPI void WriteFrameChains();

    MCNAPI void WriteFrameDependencyDefinition();

    MCNAPI void WriteFrameDtis();

    MCNAPI void WriteFrameFdiffs();

    MCNAPI void WriteMandatoryFields();

    MCNAPI void WriteNonSymmetric(uint, uint);

    MCNAPI void WriteResolutions();

    MCNAPI void WriteTemplateChains();

    MCNAPI void WriteTemplateDependencyStructure();

    MCNAPI void WriteTemplateDtis();

    MCNAPI void WriteTemplateFdiffs();

    MCNAPI void WriteTemplateLayers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar>,
        ::webrtc::FrameDependencyStructure const&,
        ::std::bitset<32>,
        ::webrtc::DependencyDescriptor const&
    );
    // NOLINTEND
};

} // namespace webrtc
