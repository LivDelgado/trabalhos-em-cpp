EXEC=$1
TMP_OUT=$2

for i in {0..0..1}; do # trocar pelo número de testes

  testname=$(printf "ct0%01d" $i) # trocar pelo modelo de nome da entrada

  $EXEC < testes/$testname.txt > $TMP_OUT

  if ! diff -qwB testes/$testname-output.txt $TMP_OUT &>/dev/null; then # trocar pelo modelo de nome da saída
    echo "[FAIL] Teste $testname falhou."
  else
    echo "[CHECK] Teste $testname passou!"
  fi

done
rm $TMP_OUT