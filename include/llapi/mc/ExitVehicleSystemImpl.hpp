/**
 * @file  ExitVehicleSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExitVehicleSystemImpl.
 *
 */
class ExitVehicleSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITVEHICLESYSTEMIMPL
public:
    class ExitVehicleSystemImpl& operator=(class ExitVehicleSystemImpl const &) = delete;
    ExitVehicleSystemImpl(class ExitVehicleSystemImpl const &) = delete;
    ExitVehicleSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?tryPlaceAt\@ExitVehicleSystemImpl\@\@SA_NAEBVVec3\@\@AEBVAABB\@\@AEBVIConstBlockSource\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    MCAPI static bool tryPlaceAt(class Vec3 const &, class AABB const &, class IConstBlockSource const &, class optional_ref<class GetCollisionShapeInterface const>);

};