/**
 * @file  RayTracingOptions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RayTracingOptions.
 *
 */
class RayTracingOptions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAYTRACINGOPTIONS
public:
    class RayTracingOptions& operator=(class RayTracingOptions const &) = delete;
    RayTracingOptions(class RayTracingOptions const &) = delete;
    RayTracingOptions() = delete;
#endif

public:
    /**
     * @hash   -1974321303
     * @symbol ?RAY_TRACING_TAG@RayTracingOptions@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const RAY_TRACING_TAG;

};