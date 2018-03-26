struct VSInput
{
    float4 position : POSITION;
    float4 color : COLOR;
};

struct FSInput
{
    float4 position : SV_POSITION;
    float4 color : COLOR;
};

cbuffer MatrixBuffer
{
    matrix m_model;
    matrix m_view;
    matrix m_projection;
};


// =======================================================
// main
// =======================================================
FSInput VS(VSInput input)
{
    FSInput output;

    input.position.w = 1.0f;

    output.position = mul(input.position, m_model);
    output.position = mul(input.position, m_view);
    output.position = mul(input.position, m_projection);

    output.color = input.color;

    return output;
}