/**
 * @file  DimensionFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class DimensionFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONFACTORY
public:
    class DimensionFactory& operator=(class DimensionFactory const &) = delete;
    DimensionFactory(class DimensionFactory const &) = delete;
    DimensionFactory() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?create\@DimensionFactory\@\@UEBA?AV?$OwnerPtrT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class OwnerPtrT<struct SharePtrRefTraits<class Dimension>> create(std::string const &) const;
    /**
     * @vftbl 2
     * @symbol ?initializeDimension\@DimensionFactory\@\@UEBAXAEAVDimension\@\@\@Z
     */
    virtual void initializeDimension(class Dimension &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSIONFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DimensionFactory();
#endif
    /**
     * @symbol ??0DimensionFactory\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VILevel\@\@\@Bedrock\@\@\@gsl\@\@V?$not_null\@V?$NonOwnerPointer\@VScheduler\@\@\@Bedrock\@\@\@2\@\@Z
     */
    MCAPI DimensionFactory(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>, class gsl::not_null<class Bedrock::NonOwnerPointer<class Scheduler>>);
    /**
     * @symbol ?getDimensionOwnerPtrFactory\@DimensionFactory\@\@QEAAAEAV?$OwnerPtrFactory\@VDimension\@\@AEAVILevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCAPI class OwnerPtrFactory<class Dimension, class ILevel &, class Scheduler &> & getDimensionOwnerPtrFactory();
    /**
     * @symbol ?getDimensionOwnerPtrFactory\@DimensionFactory\@\@QEBAAEBV?$OwnerPtrFactory\@VDimension\@\@AEAVILevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCAPI class OwnerPtrFactory<class Dimension, class ILevel &, class Scheduler &> const & getDimensionOwnerPtrFactory() const;

};
