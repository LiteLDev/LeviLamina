#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpErrorCategory {

public:
    // prevent constructor by default
    HttpErrorCategory& operator=(HttpErrorCategory const&) = delete;
    HttpErrorCategory(HttpErrorCategory const&)            = delete;
    HttpErrorCategory()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?name\@HttpErrorCategory\@Http\@Bedrock\@\@UEBAPEBDXZ
     */
    virtual char const* name() const;
    /**
     * @vftbl 2
     * @symbol
     * ?message\@HttpErrorCategory\@Http\@Bedrock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual std::string message(int32_t) const;
    /**
     * @vftbl 3
     * @symbol ?default_error_condition\@HttpErrorCategory\@Http\@Bedrock\@\@UEBA?AVerror_condition\@std\@\@H\@Z
     */
    virtual std::error_condition default_error_condition(int32_t) const;
    /**
     * @vftbl 4
     * @symbol ?equivalent\@error_category\@std\@\@UEBA_NHAEBVerror_condition\@2\@\@Z
     */
    virtual bool equivalent(int32_t, std::error_condition const&) const;
    /**
     * @vftbl 5
     * @symbol ?equivalent\@HttpErrorCategory\@Http\@Bedrock\@\@UEBA_NAEBVerror_code\@std\@\@H\@Z
     */
    virtual bool equivalent(std::error_code const&, int32_t) const;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?start\@BufferedResponseBody\@Http\@Bedrock\@\@MEAA?AVerror_code\@std\@\@V?$optional\@_K\@5\@\@Z
     */
    virtual std::error_code start(std::optional<uint64_t>);
    /**
     * @vftbl 8
     * @symbol ?write\@BufferedResponseBody\@Http\@Bedrock\@\@MEAA?AVerror_code\@std\@\@V?$span\@$$CBE$0?0\@gsl\@\@\@Z
     */
    virtual std::error_code write(gsl::span<uint8_t const, -1>);
    /**
     * @vftbl 9
     * @symbol ?complete\@BufferedResponseBody\@Http\@Bedrock\@\@MEAAXXZ
     */
    virtual void complete();
    /**
     * @vftbl 10
     * @symbol ?cancel\@BufferedResponseBody\@Http\@Bedrock\@\@MEAAXXZ
     */
    virtual void cancel();
    /**
     * @vftbl 11
     * @symbol
     * ?getLoggableDestination\@BufferedResponseBody\@Http\@Bedrock\@\@MEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getLoggableDestination() const;
    /**
     * @vftbl 12
     * @symbol ?getLoggableData\@BufferedResponseBody\@Http\@Bedrock\@\@MEBA?AV?$span\@$$CBE$0?0\@gsl\@\@XZ
     */
    virtual gsl::span<uint8_t const, -1> getLoggableData() const;
    /**
     * @symbol ?get\@HttpErrorCategory\@Http\@Bedrock\@\@SAAEBVerror_category\@std\@\@XZ
     */
    MCAPI static std::error_category const& get();
    // NOLINTEND
};

}; // namespace Bedrock::Http
