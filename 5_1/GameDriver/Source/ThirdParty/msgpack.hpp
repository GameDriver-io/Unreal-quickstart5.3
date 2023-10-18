//
// MessagePack for C++
//
// Copyright (C) 2008-2009 FURUHASHI Sadayuki
//
//    Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//    http://www.boost.org/LICENSE_1_0.txt)
//

#pragma warning( push )
#pragma warning( disable : 4530 4668)
#pragma push_macro("CONSTEXPR")
#undef CONSTEXPR
#pragma push_macro("dynamic_cast")
#undef dynamic_cast
#pragma push_macro("std::bad_cast")
#undef bad_cast
#pragma push_macro("check")
#undef check
#pragma push_macro("PI")
#undef PI
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("InterlockedExchange")
#undef InterlockedExchange

#if PLATFORM_WINDOWS
#include "Windows/PreWindowsApi.h"
#endif
#include "msgpack/object.hpp"
#include "msgpack/iterator.hpp"
#include "msgpack/zone.hpp"
#include "msgpack/pack.hpp"
#include "msgpack/null_visitor.hpp"
#include "msgpack/parse.hpp"
#include "msgpack/unpack.hpp"
#include "msgpack/x3_parse.hpp"
#include "msgpack/x3_unpack.hpp"
#include "msgpack/sbuffer.hpp"
#include "msgpack/vrefbuffer.hpp"
#include "msgpack/version.hpp"
#include "msgpack/type.hpp"
#if PLATFORM_WINDOWS
#include "Windows/PostWindowsApi.h"
#endif
//THIRD_PARTY_INCLUDES_END

#pragma pop_macro("InterlockedExchange")
#pragma pop_macro("TEXT")
#pragma pop_macro("PI")
#pragma pop_macro("check")
#pragma pop_macro("std::bad_cast")
#pragma pop_macro("dynamic_cast")
#pragma pop_macro("CONSTEXPR")
#pragma warning( pop )
