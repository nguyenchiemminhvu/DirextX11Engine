struct FSInput
{
    float4 position : SV_POSITION;
    float4 color : COLOR;
};


// =======================================================
// main
// =======================================================
float4 FS(FSInput input) : SV_TARGET
{
    return input.color;
}