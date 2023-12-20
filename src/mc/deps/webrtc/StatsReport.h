#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
// clang-format on

namespace webrtc {

class StatsReport {
public:
    // StatsReport inner types declare
    // clang-format off
    class IdBase;
    struct Value;
    // clang-format on

    // StatsReport inner types define
    enum class Direction {};

    enum class StatsType {};

    enum class StatsValueName {};

    class IdBase : public ::rtc::RefCountInterface {
    public:
        // prevent constructor by default
        IdBase& operator=(IdBase const&);
        IdBase(IdBase const&);
        IdBase();

    public:
        // NOLINTBEGIN
        // vIndex: 2, symbol: ??1IdBase@StatsReport@webrtc@@UEAA@XZ
        virtual ~IdBase();

        // vIndex: 3, symbol: ?Equals@IdBase@StatsReport@webrtc@@MEBA_NAEBV123@@Z
        virtual bool Equals(class webrtc::StatsReport::IdBase const&) const;

        // symbol: ?type@IdBase@StatsReport@webrtc@@QEBA?AW4StatsType@23@XZ
        MCAPI ::webrtc::StatsReport::StatsType type() const;

        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        // symbol: ??0IdBase@StatsReport@webrtc@@IEAA@W4StatsType@12@@Z
        MCAPI explicit IdBase(::webrtc::StatsReport::StatsType);

        // NOLINTEND
    };

    struct Value {
    public:
        // Value inner types define
        enum class Type {};

    public:
        // prevent constructor by default
        Value& operator=(Value const&);
        Value(Value const&);
        Value();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?ToString@Value@StatsReport@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string ToString() const;

        // symbol: ??0Value@StatsReport@webrtc@@QEAA@W4StatsValueName@12@_N@Z
        MCAPI Value(::webrtc::StatsReport::StatsValueName, bool);

        // symbol: ??0Value@StatsReport@webrtc@@QEAA@W4StatsValueName@12@PEBD@Z
        MCAPI Value(::webrtc::StatsReport::StatsValueName, char const*);

        // symbol:
        // ??0Value@StatsReport@webrtc@@QEAA@W4StatsValueName@12@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
        MCAPI
        Value(::webrtc::StatsReport::StatsValueName, class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

        // symbol:
        // ??0Value@StatsReport@webrtc@@QEAA@W4StatsValueName@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI Value(::webrtc::StatsReport::StatsValueName, std::string const&);

        // symbol: ??0Value@StatsReport@webrtc@@QEAA@W4StatsValueName@12@M@Z
        MCAPI Value(::webrtc::StatsReport::StatsValueName, float);

        // symbol: ??0Value@StatsReport@webrtc@@QEAA@W4StatsValueName@12@_JW4Type@012@@Z
        MCAPI Value(::webrtc::StatsReport::StatsValueName, int64, ::webrtc::StatsReport::Value::Type);

        // symbol: ??8Value@StatsReport@webrtc@@QEBA_N_J@Z
        MCAPI bool operator==(int64) const;

        // symbol: ??8Value@StatsReport@webrtc@@QEBA_N_N@Z
        MCAPI bool operator==(bool) const;

        // symbol: ??8Value@StatsReport@webrtc@@QEBA_NPEBD@Z
        MCAPI bool operator==(char const*) const;

        // symbol: ??8Value@StatsReport@webrtc@@QEBA_NAEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
        MCAPI bool operator==(class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&) const;

        // symbol:
        // ??8Value@StatsReport@webrtc@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI bool operator==(std::string const&) const;

        // symbol: ??8Value@StatsReport@webrtc@@QEBA_NM@Z
        MCAPI bool operator==(float) const;

        // symbol:
        // ?string_val@Value@StatsReport@webrtc@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string const& string_val() const;

        // symbol: ??1Value@StatsReport@webrtc@@QEAA@XZ
        MCAPI ~Value();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StatsReport& operator=(StatsReport const&);
    StatsReport(StatsReport const&);
    StatsReport();

public:
    // NOLINTBEGIN
    // symbol: ?AddBoolean@StatsReport@webrtc@@QEAAXW4StatsValueName@12@_N@Z
    MCAPI void AddBoolean(::webrtc::StatsReport::StatsValueName, bool);

    // symbol: ?AddFloat@StatsReport@webrtc@@QEAAXW4StatsValueName@12@M@Z
    MCAPI void AddFloat(::webrtc::StatsReport::StatsValueName, float);

    // symbol:
    // ?AddId@StatsReport@webrtc@@QEAAXW4StatsValueName@12@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
    MCAPI void
    AddId(::webrtc::StatsReport::StatsValueName, class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

    // symbol: ?AddInt@StatsReport@webrtc@@QEAAXW4StatsValueName@12@H@Z
    MCAPI void AddInt(::webrtc::StatsReport::StatsValueName, int);

    // symbol: ?AddInt64@StatsReport@webrtc@@QEAAXW4StatsValueName@12@_J@Z
    MCAPI void AddInt64(::webrtc::StatsReport::StatsValueName, int64);

    // symbol: ?AddString@StatsReport@webrtc@@QEAAXW4StatsValueName@12@PEBD@Z
    MCAPI void AddString(::webrtc::StatsReport::StatsValueName, char const*);

    // symbol:
    // ?AddString@StatsReport@webrtc@@QEAAXW4StatsValueName@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void AddString(::webrtc::StatsReport::StatsValueName, std::string const&);

    // symbol: ?FindValue@StatsReport@webrtc@@QEBAPEBUValue@12@W4StatsValueName@12@@Z
    MCAPI struct webrtc::StatsReport::Value const* FindValue(::webrtc::StatsReport::StatsValueName) const;

    // symbol: ??0StatsReport@webrtc@@QEAA@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
    MCAPI explicit StatsReport(class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

    // symbol: ??1StatsReport@webrtc@@QEAA@XZ
    MCAPI ~StatsReport();

    // symbol: ?NewBandwidthEstimationId@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@XZ
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> NewBandwidthEstimationId();

    // symbol:
    // ?NewCandidateId@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> NewCandidateId(bool, std::string const&);

    // symbol:
    // ?NewCandidatePairId@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase>
    NewCandidatePairId(std::string const&, int, int);

    // symbol:
    // ?NewComponentId@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> NewComponentId(std::string const&, int);

    // symbol:
    // ?NewIdWithDirection@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@W4StatsType@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Direction@12@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase>
    NewIdWithDirection(::webrtc::StatsReport::StatsType, std::string const&, ::webrtc::StatsReport::Direction);

    // symbol:
    // ?NewTypedId@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@W4StatsType@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase>
    NewTypedId(::webrtc::StatsReport::StatsType, std::string const&);

    // symbol:
    // ?NewTypedIntId@StatsReport@webrtc@@SA?AV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@W4StatsType@12@H@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::StatsReport::IdBase>
    NewTypedIntId(::webrtc::StatsReport::StatsType, int);

    // NOLINTEND
};

}; // namespace webrtc
