/*
Copyright 2103 eric schkufza

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "src/label.h"

using namespace std;

namespace x64asm {

void Label::write_att(ostream& os) const {
  os << ".L_X64ASM_" << dec << val_;
}

map<string, uint64_t> Label::labels_;
uint64_t Label::next_val_;

} // namespace x64asm
