//Extra Part For MCRESULT.hpp
#ifdef EXTRA_INCLUDE_PART_MCRESULT
// Include Headers or Declare Types Here

#else
// Add Member There
unsigned char filler[4];
operator bool() {
    return filler[0];
}

#endif
