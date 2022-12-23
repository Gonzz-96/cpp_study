
namespace My_code {

    class complex {};

    complex sqrt(complex);

    int main();
}

int My_code::main()
{
    complex z;
    auto z2 = sqrt(z);
}

int main() {
    return My_code::main();
}