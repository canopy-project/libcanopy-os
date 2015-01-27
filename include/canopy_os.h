// Copyright 2015 SimpleThings, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// canopy_os.h
// OS Abstraction Layer for Canopy

#ifndef CANOPY_OS_INCLUDED
#define CANOPY_OS_INCLUDED

#include <stddef.h>

void * canopy_os_alloc(size_t size);
void * canopy_os_calloc(int count, size_t size);
void canopy_os_free(void *ptr);
void canopy_os_log(const char *msg, ...);
void canopy_os_assert(int condition);


#endif // CANOPY_OS_INCLUDED


