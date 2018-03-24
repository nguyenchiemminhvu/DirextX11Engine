#pragma once

#define SAFE_DELETE(p) do { if (p) { delete (p); (p) = nullptr; } } while(0)