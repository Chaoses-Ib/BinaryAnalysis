static user_main(void)
{
    // change the default script interpreter to IDAPython (result in an error if put in idapythonrc.py)
    load_and_run_plugin("idapython", 3);
}