#pragma once

#include "List.h"
#include <type_traits>
#include <stdint.h>

using std::is_same;

namespace tp = osvr::typepack;

// THIS SECTION MUST BE MANUALLY KEPT IN-SYNC!
using myhead = uint32_t;
using myelt1 = myhead;
using myelt2 = int16_t;
using myelt3 = bool;
using mytail = tp::list<myelt2, myelt3>;
using myhead2 = tp::list<myelt1, myelt2>;
using mylist = tp::list<myelt1, myelt2, myelt3>;

static const size_t mylist_len = 3;