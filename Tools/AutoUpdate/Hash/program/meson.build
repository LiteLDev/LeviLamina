project('hash', 'cpp',
        default_options: ['buildtype=release',
                          'cpp_std=c++14',
                          'warning_level=1',
                          'werror=false',
                          'strip=true',
                          #'b_sanitize=undefined',
                          'b_asneeded=true',
                          'b_lundef=true',
                          'b_lto=false'
                         ])

CXXFLAGS = ''
CXXFLAGS = CXXFLAGS.split(' ')

LDFLAGS = ''
LDFLAGS = LDFLAGS.split(' ')

sources = files('main.cpp')

exe = executable('hash', sources,
                 #cpp_args: CXXFLAGS,
                 #link_args: LDFLAGS
                )
